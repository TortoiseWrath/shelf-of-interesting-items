# Copyright 2023 Google LLC
# This is not an official Google product, just a thing I made at work to deal
# with a problem I had once.

# MAGIC FISH is an ultralight testing framework for fish, useful for writing
# integration tests for command-line utilities and services with CLIs.

# Logs anything piped in or passed as arguments to stderr.
# stderr is used for MAGIC FISH outputs, while stdout is reserved for outputs
# from the tested commands and passing data between functions.
function log
  if ! isatty stdin
    read input
  else
    set -f input ''
  end
  string join '' $input $argv 1>&2
end

# Log, but in red, and return non-zero status.
function err
  set_color red
  log -- $argv
  set_color normal
  return 1
end

# Helper function to indicate that a given test has passed.
# test: The test name.
set -U tests_passed 0
function pass_test -a test
  set -U tests_passed (math $tests_passed + 1)
  set_color --bold green
  log "Test passed: $argv"
  set_color normal
end

# Helper function to indicate that a given test has failed.
# test: The test name.
set -U tests_failed 0
function fail_test -a test
  set -U tests_failed (math $tests_failed + 1)
  set_color --bold red
  log "Test failed: $argv"
  set_color normal
end

# Helper function to indicate that a given expectation has passed.
function pass
  set -g passed_expectations (math $passed_expectations + 1)
end

# Helper function to indicate that a given expectation has failed.
function fail -a msg
  set -g failed_expectations (math $failed_expectations + 1)
  err $msg
end

# Run a test declared with declare_test.
# Each test consists of a series of expectations; the test passes iff all
# expectations pass and the test body returned 0 status.
function run_test -a test
  set -g passed_expectations 0
  set -g failed_expectations 0
  test_$test
  set test_status $status
  set total_expectations (math $passed_expectations + $failed_expectations)
  log "Test $test passed $passed_expectations/$total_expectations expectations"
  if test $failed_expectations = 0 
    if test $test_status = 0
      pass_test $test
    else
      log "Test $test passed all expectations, but the test body " \
        "returned non-zero status $test_status"
      fail_test $Test
    end
  else
    fail_test $test
  end
  echo
end

# Call run_test_async to run a given test asynchronously. This is primarily
# used by the run_all_tests function to run tests in parallel.
# test: The name of the test.
set -eg tmpfiles || true
function run_test_async -a test
  set tmpfile (mktemp)
  set -ag tmpfiles $tmpfile
  begin
    echo
    set_color --bold yellow
    echo $test
    set_color normal
  end > $tmpfile
  fish -c ". $(status --current-filename) && run_test $test &| tee -a $tmpfile" &
  log "Launched $test ($last_pid), log $tmpfile"
end

# Declare each test with:
# declare_test test_name
# function (test_body)
#   # test some things...
# end
# name: The name of the test.
set -eg all_tests || true
function declare_test -a name
  set -ag all_tests $name
end
# Hacky way to avoid having to write the name of each test three times.
function test_body
  echo test_$all_tests[-1]
end

# Run all tests in parallel.
function run_all_tests
  for test in $all_tests
    run_test_async $test
  end
  wait
  log "done"

  cat $tmpfiles
  log

  if test $tests_passed -eq 0
    set_color --bold red
  else
    set_color --bold green
  end
  log "$tests_passed tests passed"
  if test $tests_failed -gt 0
    set_color --bold red
    log "$tests_failed tests failed"
  end
end

# Echoes a list with one entry for each permutation of the arguments.
# Each permutation is \n-terminated; each element is \r-terminated.
function permutations
  set -f count (count $argv)
  if test $count -le 1
    echo $argv
    return 0
  end
  if test $count -eq 2
    echo "$argv[1]"\r"$argv[2]"
    echo "$argv[2]"\r"$argv[1]"
    return 0
  end
  set -f first 1
  while test $first -le $count
    set -l next (math $first + 1)
    if test $first = 1
      set -f partials (permutations $argv[2..-1])
    else if test $first = $count
      set -f partials (permutations $argv[1..-2])
    else
      set -l previous (math $first - 1)
      set -f partials (permutations $argv[1..$previous] $argv[$next..-1])
    end
    for partial in $partials
      echo "$argv[$first]"\r"$partial"
    end
    set -f first $next
  end
end

# Expects that two strings are equal after trimming.
# Usage: expect_eq "$str1" "$str2" "Message on failure"
# Message is optional for this one.
function expect_eq -a a b msg
  if ! test -n "$msg"
    set -f msg "Expected equal:
(value 1)
$a
(value 2)
$b"
  end
  expect "$(string trim $a)" = "$(string trim $b)" "$msg"
end

# Expects that a given command exits with status 0.
# Usage: expect_ok (command) "Message on failure"
function expect_ok
  set -f parent_status $status
  if test $parent_status -ne 0
    fail $argv[-1]
  else
    pass
  end
  set -f to_echo (string trim (echo $argv[1..-2]))
  if test -n $to_echo
    echo $to_echo
  end
  return $parent_status
end

# Like fish `test` but with a built-in expectation.
# Example: expect $foo -gt $bar "Message on failure"
function expect
  expect_ok (test $argv[1..-2]) $argv[-1]
end

# Warning: This is O(n!).
# Expect some permutation of the array in the variable with name var1 to be the
# array in the variable with name var2.
# Example:
#   set foo a b c
#   set bar b c a
#   expect_some_permutation foo bar "Bar $bar is not a permutation of foo $foo"
function expect_some_permutation --no-scope-shadowing -a var1 var2 msg
  if test (count $$var1) != (count $$var2)
    err "Array $var1 has length $(count $$var1) but array $var2 has length $(count $$var2)"
    fail $msg
    return 1
  end
  if test (count $$var1) = 1
    expect "$$var1" = "$$var2" "$msg"
  end
  for permutation in (string split \n "$(permutations $$var1)")
    if test "$(string join \r $$var2)" = "$permutation"
      pass
      return 0
    end
  end
  if test -n "$msg"
    fail $msg
  else
    fail " $var2 is not a permutation of $var1"\n\n"$var1:"\n"$$var1"\n\n"$var2:"\n"$$var2"
  end
end
