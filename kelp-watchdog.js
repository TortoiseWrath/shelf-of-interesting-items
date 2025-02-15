// Copyright 2025 Google LLC
// This is not a Google product.

function checkOnKelp() {
  Shelly.call("HTTP.REQUEST", {
    'url': 'http://192.168.12.200',
    'method': 'HEAD',
    'timeout': 5,
  }, function(result, error_code, error) {
    if (error_code) {
      handleKelpDown();
    } else {
      handleKelpUp();
    }
  });
}

function tryTurningItOffAndOnAgain() {
  Shelly.call('Switch.set', {'id': 0, 'on': false});
  Timer.set(10000, false, function() {
    Shelly.call('Switch.set', {'id': 0, 'on': true});
    Timer.set(backoffMinutes * 60000, false, checkOnKelp);
    backoffMinutes *= 2;
  });
}

let watchdog = undefined;
let backoffMinutes = 1;
let sentEmail = false;
function startWatchdog() {
  if (watchdog) return;
  watchdog = Timer.set(60 * 1000, true, checkOnKelp);
  backoffMinutes = 1;
}
function stopWatchdog() {
  if (!watchdog) return;
  Timer.clear(watchdog);
  watchdog = undefined;
}

function sendEmail(subject, body, successCallback) {
  Shelly.call('HTTP.REQUEST', {
    'url': 'https://api.sendgrid.com/v3/mail/send',
    'method': 'POST',
    'headers': {
      'Authorization': 'Bearer ' + SENDGRID_KEY,
      'Content-Type': 'application/json',
    },
    'body': JSON.stringify({
      'personalizations': [{'to': [
        {'email': 'shannon@anonpress.org'},
        {'email': 'sean+kelp@tortoisewrath.com'},    
      ]}],
      'from': {'email': 'sean+kelp@tortoisewrath.com'},
      'subject': subject,
      'content': [{
        'type': 'text/plain',
        'value': body,
      }]
    })
  }, function(result, error_code, error) {
    if (error_code) {
      console.log(error);
    } else {
      successCallback();
    }
  });
}

function sendWarning() {
  if (backoffMinutes < 4) return;
  if (sentEmail) return;
  sendEmail('[Kelp Watchdog] KelpCam is down', 'Hi, KelpCam is down. I tried turning it off and on again, but it didn\'t help. I\'ll let you know if I get it back. -Kelp Watchdog', function() {
    sentEmail = true;
  });
}

function sendAllClear() {
  if (!sentEmail) return;
  sendEmail('[Kelp Watchdog] KelpCam is up', 'Hi, KelpCam came back up. You\'re welcome. -Kelp Watchdog', function(){});
  sentEmail = false;
}

function handleKelpUp() {
   console.log("KELP IS UP");
   sendAllClear();
   startWatchdog();
}

function handleKelpDown() {
   console.log("KELP IS DOWN");
   sendWarning();
   stopWatchdog();
   tryTurningItOffAndOnAgain();
}

checkOnKelp();
