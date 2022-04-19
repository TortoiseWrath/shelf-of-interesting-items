#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
  DANCE_39,
  DANCE_40,
  DANCE_41,
  DANCE_42,
  DANCE_43,
  DANCE_44,
  DANCE_45,
  DANCE_46,
  DANCE_47,
  DANCE_48,
  DANCE_49,
  DANCE_50,
  DANCE_51,
  DANCE_52,
  DANCE_53,
  DANCE_54,
  DANCE_55,
  DANCE_56,
  DANCE_57,
  DANCE_58,
  DANCE_59,
  DANCE_60,
  DANCE_61,
  DANCE_62,
  DANCE_63,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           TD(DANCE_2),    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_SCOLON,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_N,                                                                           TD(DANCE_3),    KC_H,           KC_J,           KC_K,           KC_L,           KC_QUOTE,       KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_LCTRL,       KC_LGUI,        KC_GRAVE,       MO(1),          KC_LALT,        TD(DANCE_0),                                                                                                    MO(3),          KC_LPRN,        KC_RPRN,        KC_LBRACKET,    KC_RBRACKET,    KC_RALT,        
    KC_BSPACE,      KC_DELETE,      TD(DANCE_1),                    KC_MEDIA_PLAY_PAUSE,KC_F13,         KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    LCTL(KC_B),     KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     KC_UP,          ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          ST_MACRO_7,     ST_MACRO_8,     
    KC_CAPSLOCK,    KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          ST_MACRO_6,                                                                     KC_MS_WH_DOWN,  KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    ST_MACRO_9,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F14,         KC_F15,         KC_F16,         KC_F17,         KC_F18,                                         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         KC_F24,         
    KC_RCTRL,       KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,                                                                                                  KC_MS_WH_RIGHT, ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN3,     KC_TRANSPARENT,                 RESET,          KC_MS_BTN3,     KC_MS_BTN2
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NUMLOCK,     KC_CALCULATOR,  KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPSLOCK,    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,                                                                                                      KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                          KC_SCROLLLOCK,  KC_KP_ENTER,    KC_KP_0
  ),
  [3] = LAYOUT_moonlander(
    TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),                                   TD(DANCE_34),   TD(DANCE_35),   TD(DANCE_36),   TD(DANCE_37),   TD(DANCE_38),   TD(DANCE_39),   TD(DANCE_40),   
    TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),                                   TD(DANCE_41),   TD(DANCE_42),   TD(DANCE_43),   TD(DANCE_44),   TD(DANCE_45),   TD(DANCE_46),   TD(DANCE_47),   
    TD(DANCE_18),   TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),                                                                   TD(DANCE_48),   TD(DANCE_49),   TD(DANCE_50),   TD(DANCE_51),   TD(DANCE_52),   TD(DANCE_53),   TD(DANCE_54),   
    TD(DANCE_25),   TD(DANCE_26),   TD(DANCE_27),   TD(DANCE_28),   TD(DANCE_29),   TD(DANCE_30),                                   TD(DANCE_55),   TD(DANCE_56),   TD(DANCE_57),   TD(DANCE_58),   TD(DANCE_59),   TD(DANCE_60),   
    RGUI(KC_F11),   TD(DANCE_31),   TD(DANCE_32),   TD(DANCE_33),   RGUI(KC_F12),   RGUI(RSFT(KC_F2)),                                                                                                KC_TRANSPARENT, RGUI(RSFT(KC_F11)),TD(DANCE_61),   TD(DANCE_62),   TD(DANCE_63),   RGUI(RSFT(KC_F12)),
    RGUI(KC_F6),    RGUI(RSFT(KC_F6)),RGUI(RCTL(KC_F6)),                RALT(RGUI(KC_F6)),RGUI(KC_F2),    RGUI(RSFT(KC_F2))
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    RGUI(RCTL(KC_F7)),RGUI(KC_F1),    RALT(RGUI(KC_F19)),RGUI(KC_F21),   RALT(RGUI(KC_F23)),KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F1)),RALT(RGUI(RSFT(KC_F19))),RGUI(RSFT(KC_F21)),RALT(RGUI(RSFT(KC_F23))),RALT(RGUI(KC_F7)),
    RGUI(RCTL(KC_F12)),RGUI(KC_F1),    RGUI(KC_F11),   RGUI(KC_F13),   RGUI(KC_F6),    KC_NO,          RGUI(RCTL(KC_F6)),                                                                RALT(RGUI(KC_F6)),KC_NO,          RGUI(RSFT(KC_F1)),RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F6)),RALT(RGUI(KC_F12)),
    RGUI(RCTL(KC_F6)),RGUI(KC_F1),    RGUI(KC_F11),   RGUI(KC_F13),   RGUI(KC_F6),    KC_NO,                                          KC_NO,          RGUI(RSFT(KC_F1)),RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F6)),RALT(RGUI(KC_F6)),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_moonlander(
    RGUI(RCTL(KC_F7)),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RALT(RGUI(KC_F7)),
    KC_NO,          RALT(RGUI(KC_F19)),RGUI(KC_F9),    RGUI(KC_F19),   RGUI(KC_F23),   KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RALT(RGUI(RSFT(KC_F19))),RGUI(RSFT(KC_F9)),RGUI(RSFT(KC_F19)),RGUI(RSFT(KC_F23)),KC_NO,          
    RGUI(RCTL(KC_F5)),RGUI(KC_F11),   RGUI(KC_F9),    RGUI(KC_F2),    RGUI(KC_F16),   KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F9)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F6)),RALT(RGUI(KC_F5)),
    RGUI(RCTL(KC_F13)),RGUI(KC_F11),   RGUI(KC_F9),    RGUI(KC_F2),    RGUI(KC_F16),   KC_NO,                                          KC_NO,          RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F9)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F6)),RALT(RGUI(KC_F13)),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_moonlander(
    RGUI(RCTL(KC_F12)),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RALT(RGUI(KC_F12)),
    RGUI(RCTL(KC_F5)),RGUI(KC_F21),   RGUI(KC_F19),   RGUI(KC_F10),   RALT(RGUI(KC_F20)),KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F21)),RGUI(RSFT(KC_F19)),RGUI(RSFT(KC_F10)),RALT(RGUI(RSFT(KC_F20))),RALT(RGUI(KC_F5)),
    KC_NO,          RGUI(KC_F13),   RGUI(KC_F2),    RGUI(KC_F10),   RGUI(KC_F12),   KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F10)),RGUI(RSFT(KC_F12)),KC_NO,          
    RGUI(RCTL(KC_F8)),RGUI(KC_F13),   RGUI(KC_F2),    RGUI(KC_F10),   RGUI(KC_F12),   KC_NO,                                          KC_NO,          RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F10)),RGUI(RSFT(KC_F12)),RALT(RGUI(KC_F8)),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [7] = LAYOUT_moonlander(
    RGUI(RCTL(KC_F6)),KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RALT(RGUI(KC_F6)),
    RGUI(RCTL(KC_F13)),RALT(RGUI(KC_F23)),RGUI(KC_F23),   RALT(RGUI(KC_F20)),RGUI(KC_F3),    KC_NO,          RGUI(RCTL(KC_F6)),                                RALT(RGUI(KC_F6)),KC_NO,          RALT(RGUI(RSFT(KC_F23))),RALT(RGUI(RSFT(KC_F20))),RGUI(RSFT(KC_F3)),RGUI(RSFT(KC_F3)),RALT(RGUI(KC_F13)),
    RGUI(RCTL(KC_F8)),RGUI(KC_F6),    RGUI(KC_F16),   RGUI(KC_F12),   RGUI(KC_F3),    KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F6)),RGUI(RSFT(KC_F16)),RGUI(RSFT(KC_F12)),RGUI(RSFT(KC_F3)),RALT(RGUI(KC_F8)),
    KC_NO,          RGUI(KC_F6),    RGUI(KC_F16),   RGUI(KC_F12),   RGUI(KC_F3),    KC_NO,                                          KC_NO,          RGUI(RSFT(KC_F6)),RGUI(RSFT(KC_F16)),RGUI(RSFT(KC_F12)),RGUI(RSFT(KC_F3)),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [8] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_F1),    RGUI(KC_F11),   RGUI(KC_F13),   RGUI(KC_F6),    KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F1)),RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F6)),KC_NO,          
    KC_NO,          RGUI(KC_F1),    RGUI(KC_F11),   RGUI(KC_F13),   RGUI(KC_F6),    RGUI(RCTL(KC_F14)),KC_NO,                                                                          KC_NO,          RALT(RGUI(KC_F14)),RGUI(RSFT(KC_F1)),RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F6)),KC_NO,          
    KC_NO,          KC_NO,          RALT(RGUI(KC_F21)),RGUI(KC_F22),   RALT(RGUI(KC_F24)),RGUI(RCTL(KC_F6)),                                RALT(RGUI(KC_F6)),KC_NO,          RALT(RGUI(RSFT(KC_F21))),RGUI(KC_F22),   RALT(RGUI(RSFT(KC_F24))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_F11),   RGUI(KC_F9),    RGUI(KC_F2),    RGUI(KC_F16),   RGUI(RCTL(KC_F14)),KC_NO,                                          KC_NO,          RALT(RGUI(KC_F14)),RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F9)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F16)),KC_NO,          
    KC_NO,          RGUI(KC_F11),   RGUI(KC_F9),    RGUI(KC_F2),    RGUI(KC_F16),   KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F11)),RGUI(RSFT(KC_F9)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F16)),KC_NO,          
    KC_NO,          RALT(RGUI(KC_F21)),KC_NO,          RGUI(KC_F20),   RGUI(KC_F24),   RGUI(RCTL(KC_F15)),                                RALT(RGUI(KC_F15)),RALT(RGUI(RSFT(KC_F21))),KC_NO,          RGUI(RSFT(KC_F20)),RGUI(RSFT(KC_F24)),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [10] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_F13),   RGUI(KC_F2),    RGUI(KC_F10),   RGUI(KC_F12),   RGUI(RCTL(KC_F14)),KC_NO,                                          KC_NO,          RALT(RGUI(KC_F14)),RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F10)),RGUI(RSFT(KC_F12)),KC_NO,          
    KC_NO,          RGUI(KC_F13),   RGUI(KC_F2),    RGUI(KC_F10),   RGUI(KC_F12),   RGUI(RCTL(KC_F15)),KC_NO,                                                                          KC_NO,          RALT(RGUI(KC_F15)),RGUI(RSFT(KC_F13)),RGUI(RSFT(KC_F2)),RGUI(RSFT(KC_F10)),RGUI(RSFT(KC_F12)),KC_NO,          
    KC_NO,          RGUI(KC_F22),   RGUI(KC_F20),   KC_NO,          RALT(RGUI(KC_F22)),KC_NO,                                          KC_NO,          RGUI(RSFT(KC_F22)),RGUI(RSFT(KC_F20)),KC_NO,          RALT(RGUI(RSFT(KC_F22))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [11] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_F6),    RGUI(KC_F16),   RGUI(KC_F12),   RGUI(KC_F3),    KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F6)),RGUI(RSFT(KC_F16)),RGUI(RSFT(KC_F12)),RGUI(RSFT(KC_F3)),KC_NO,          
    KC_NO,          RGUI(KC_F6),    RGUI(KC_F16),   RGUI(KC_F12),   RGUI(KC_F3),    KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          RGUI(RSFT(KC_F6)),RGUI(RSFT(KC_F16)),RGUI(RSFT(KC_F12)),RGUI(RSFT(KC_F3)),KC_NO,          
    KC_NO,          RALT(RGUI(KC_F24)),RGUI(KC_F24),   RALT(RGUI(KC_F22)),KC_NO,          KC_NO,                                          KC_NO,          RALT(RGUI(RSFT(KC_F24))),RGUI(RSFT(KC_F24)),RALT(RGUI(RSFT(KC_F22))),KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [12] = LAYOUT_moonlander(
    KC_NO,          RGUI(RCTL(KC_F16)),RALT(RGUI(RCTL(KC_F18))),RALT(RGUI(KC_F23)),RGUI(RCTL(KC_F16)),RALT(RGUI(KC_F16)),RGUI(KC_F6),                                    RGUI(RCTL(RSFT(KC_F16))),RALT(RGUI(RCTL(RSFT(KC_F16)))),RALT(RGUI(RSFT(KC_F23))),RGUI(RCTL(RSFT(KC_F16))),RALT(RGUI(RSFT(KC_F16))),RGUI(RSFT(KC_F6)),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(RCTL(KC_F16)),RALT(RGUI(KC_F16)),RGUI(KC_F6),    KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          RGUI(RCTL(RSFT(KC_F16))),RALT(RGUI(RSFT(KC_F16))),RGUI(RSFT(KC_F16)),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [13] = LAYOUT_moonlander(
    KC_NO,          RALT(RGUI(RCTL(KC_F16))),RGUI(RCTL(KC_F17)),RALT(RGUI(RCTL(KC_F18))),RALT(RGUI(KC_F16)),RGUI(RCTL(KC_F17)),RALT(RGUI(KC_F17)),                                RALT(RGUI(RCTL(RSFT(KC_F16)))),RGUI(RCTL(RSFT(KC_F17))),RALT(RGUI(RCTL(RSFT(KC_F18)))),RALT(RGUI(RSFT(KC_F16))),RGUI(RCTL(RSFT(KC_F17))),RALT(RGUI(RSFT(KC_F17))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RALT(RGUI(KC_F16)),RGUI(RCTL(KC_F17)),RALT(RGUI(KC_F17)),KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          RALT(RGUI(RSFT(KC_F16))),RGUI(RCTL(RSFT(KC_F17))),RALT(RGUI(RSFT(KC_F17))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [14] = LAYOUT_moonlander(
    KC_NO,          RALT(RGUI(KC_F23)),RALT(RGUI(RCTL(KC_F18))),RGUI(RCTL(KC_F18)),RGUI(KC_F6),    RALT(RGUI(KC_F17)),RGUI(RCTL(KC_F18)),                                RALT(RGUI(RSFT(KC_F23))),RALT(RGUI(RCTL(RSFT(KC_F18)))),RGUI(RCTL(RSFT(KC_F18))),RGUI(RSFT(KC_F6)),RALT(RGUI(RSFT(KC_F17))),RGUI(RCTL(RSFT(KC_F18))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_F6),    RALT(RGUI(KC_F17)),RGUI(RCTL(KC_F18)),KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          RGUI(RSFT(KC_F6)),RALT(RGUI(RSFT(KC_F17))),RGUI(RCTL(RSFT(KC_F18))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [15] = LAYOUT_moonlander(
    KC_NO,          RGUI(RCTL(KC_F16)),RALT(RGUI(KC_F16)),RGUI(KC_F6),    RGUI(RCTL(KC_F16)),RALT(RGUI(RCTL(KC_F17))),RALT(RGUI(KC_F24)),                                RGUI(RCTL(RSFT(KC_F16))),RALT(RGUI(RSFT(KC_F16))),RGUI(RSFT(KC_F6)),RGUI(RCTL(RSFT(KC_F16))),RALT(RGUI(RCTL(RSFT(KC_F17)))),RALT(RGUI(RSFT(KC_F24))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(RCTL(KC_F16)),RALT(RGUI(KC_F16)),RGUI(KC_F6),    KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          RGUI(RCTL(RSFT(KC_F16))),RALT(RGUI(RSFT(KC_F16))),RGUI(RSFT(KC_F6)),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [16] = LAYOUT_moonlander(
    KC_NO,          RALT(RGUI(KC_F16)),RGUI(RCTL(KC_F17)),RALT(RGUI(KC_F17)),RALT(RGUI(RCTL(KC_F17))),RGUI(RCTL(KC_F17)),RALT(RGUI(RCTL(KC_F19))),                                RALT(RGUI(RSFT(KC_F16))),RGUI(RCTL(RSFT(KC_F17))),RALT(RGUI(RSFT(KC_F17))),RALT(RGUI(RCTL(RSFT(KC_F17)))),RGUI(RCTL(RSFT(KC_F17))),RALT(RGUI(RCTL(RSFT(KC_F19)))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RALT(RGUI(KC_F16)),RGUI(RCTL(KC_F17)),RALT(RGUI(KC_F17)),KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          RALT(RGUI(RSFT(KC_F16))),RGUI(RCTL(RSFT(KC_F17))),RALT(RGUI(RSFT(KC_F17))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [17] = LAYOUT_moonlander(
    KC_NO,          RGUI(KC_F6),    RALT(RGUI(KC_F17)),RGUI(RCTL(KC_F18)),RALT(RGUI(KC_F24)),RALT(RGUI(RCTL(KC_F19))),RGUI(RCTL(KC_F18)),                                RGUI(RSFT(KC_F6)),RALT(RGUI(RSFT(KC_F17))),RGUI(RCTL(RSFT(KC_F18))),RALT(RGUI(RSFT(KC_F24))),RALT(RGUI(RCTL(KC_F19))),RGUI(RCTL(RSFT(KC_F18))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGUI(KC_F6),    RALT(RGUI(KC_F17)),RGUI(RCTL(KC_F18)),KC_NO,          KC_NO,                                                                                                          KC_TRANSPARENT, KC_NO,          RGUI(RSFT(KC_F6)),RALT(RGUI(RSFT(KC_F17))),RGUI(RCTL(RSFT(KC_F18))),KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {4,205,26}, {98,137,26}, {155,225,26}, {30,245,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {4,205,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {98,137,26}, {98,137,26}, {98,137,26}, {98,137,26}, {4,205,26}, {4,205,26}, {155,225,26}, {155,225,26}, {98,137,26}, {30,245,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {98,137,26}, {98,137,26}, {98,137,26}, {4,205,26}, {4,205,26}, {4,205,26} },

    [1] = { {215,255,255}, {215,255,255}, {4,205,26}, {30,245,26}, {4,205,26}, {3,207,128}, {215,255,255}, {0,0,0}, {3,207,64}, {30,245,26}, {3,207,128}, {215,255,255}, {97,135,128}, {3,207,64}, {0,0,0}, {3,207,128}, {97,135,128}, {97,135,128}, {3,207,64}, {4,205,26}, {3,207,128}, {215,255,255}, {97,135,128}, {3,207,64}, {30,245,26}, {3,207,128}, {215,255,255}, {0,0,0}, {3,207,64}, {3,207,128}, {215,255,255}, {215,255,255}, {97,135,128}, {97,135,128}, {4,205,26}, {97,135,128}, {3,207,128}, {215,255,255}, {155,225,26}, {3,207,64}, {30,245,26}, {3,207,128}, {215,255,255}, {215,255,255}, {3,207,64}, {215,255,255}, {3,207,128}, {0,0,0}, {97,135,128}, {3,207,64}, {215,255,255}, {3,207,128}, {97,135,128}, {97,135,128}, {3,207,64}, {215,255,255}, {3,207,128}, {0,0,0}, {97,135,128}, {3,207,64}, {215,255,255}, {3,207,128}, {0,0,0}, {0,0,0}, {3,207,64}, {3,207,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {215,255,255}, {97,135,128} },

    [2] = { {4,205,26}, {98,137,26}, {3,207,128}, {30,245,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {30,245,26}, {155,225,26}, {155,225,26}, {97,135,128}, {155,225,26}, {155,225,26}, {155,225,26}, {97,135,128}, {97,135,128}, {155,225,26}, {4,205,26}, {155,225,26}, {155,225,26}, {97,135,128}, {155,225,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {98,137,26}, {98,137,26}, {98,137,26}, {98,137,26}, {3,207,255}, {3,207,128}, {155,225,26}, {155,225,26}, {98,137,26}, {30,245,26}, {30,245,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {155,225,26}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {97,135,128}, {3,207,128}, {97,135,128}, {97,135,128}, {97,135,128}, {3,207,128}, {98,137,26}, {98,137,26}, {97,135,128}, {97,135,128}, {3,207,128}, {155,225,26} },

    [3] = { {3,207,128}, {3,207,128}, {3,207,128}, {3,207,128}, {32,247,255}, {97,135,128}, {155,225,26}, {155,227,255}, {155,225,26}, {97,135,128}, {97,135,128}, {155,225,26}, {155,225,26}, {155,225,26}, {97,135,128}, {97,135,128}, {155,225,26}, {155,227,128}, {155,225,26}, {97,135,128}, {97,135,128}, {155,227,128}, {155,227,255}, {155,225,26}, {32,247,255}, {97,135,128}, {3,207,128}, {3,207,128}, {3,207,128}, {97,135,128}, {3,207,128}, {3,207,128}, {0,0,255}, {0,0,255}, {3,207,255}, {155,227,255}, {155,225,26}, {3,207,128}, {3,207,128}, {3,207,128}, {32,247,255}, {97,135,128}, {155,227,128}, {155,227,255}, {155,227,128}, {97,135,128}, {97,135,128}, {155,227,64}, {155,227,128}, {155,227,128}, {97,135,128}, {97,135,128}, {155,227,128}, {155,227,128}, {155,227,128}, {97,135,128}, {97,135,128}, {155,227,128}, {155,227,255}, {155,227,128}, {32,247,255}, {97,135,128}, {3,207,128}, {3,207,128}, {3,207,128}, {97,135,128}, {3,207,128}, {3,207,128}, {155,227,255}, {155,227,255}, {3,207,255}, {0,0,0} },

    [4] = { {0,0,0}, {3,207,128}, {3,207,128}, {3,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,128}, {3,207,128}, {3,207,255}, {0,0,0}, {0,0,0}, {155,227,128}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {3,207,128}, {0,0,0}, {3,207,128}, {3,207,128}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,128}, {0,0,0}, {3,207,128}, {3,207,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {3,207,128}, {3,207,128}, {0,0,0}, {3,207,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,128}, {3,207,128}, {0,0,0}, {3,207,128}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {155,227,128}, {0,0,0}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {3,207,255}, {3,207,128}, {3,207,128}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,255}, {3,207,128}, {3,207,128}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {32,247,255}, {32,247,255}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {155,227,128}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,128}, {3,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {3,207,128}, {3,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,255}, {155,227,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {3,207,128}, {0,0,0}, {3,207,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,255}, {155,227,255}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {3,207,128}, {0,0,0}, {3,207,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,255}, {155,227,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {3,207,128}, {3,207,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,255}, {155,227,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {3,207,128}, {3,207,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,255}, {155,227,255}, {155,227,128}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {32,247,255}, {32,247,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,255}, {155,227,255}, {155,227,128}, {0,0,0}, {0,0,0}, {155,227,128}, {155,227,128}, {155,227,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [14] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [15] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [16] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [17] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {97,135,128}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {97,135,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 13:
      set_layer_color(13);
      break;
    case 14:
      set_layer_color(14);
      break;
    case 15:
      set_layer_color(15);
      break;
    case 16:
      set_layer_color(16);
      break;
    case 17:
      set_layer_color(17);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_N));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_X));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_B)) SS_DELAY(5) SS_LSFT(SS_TAP(X_7)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_COMMA));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_C));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_LSFT(SS_TAP(X_5)));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_LSFT(SS_TAP(X_1)));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_Q) SS_DELAY(5) SS_TAP(X_1) SS_DELAY(5) SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_LSFT(SS_TAP(X_LBRACKET)));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_Q) SS_DELAY(5) SS_TAP(X_0));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) SS_TAP(X_Q) SS_DELAY(5) SS_TAP(X_1));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
        // swap-window -t -1, then previous window
      SEND_STRING(
          SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) 
          SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(5)
          SS_TAP(X_L) SS_DELAY(5)
          SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) 
          SS_TAP(X_P)
      );
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
        // swap-window -t +1, then next window
      SEND_STRING(
          SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) 
          SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(5)
          SS_TAP(X_R) SS_DELAY(5)
          SS_LCTL(SS_TAP(X_B)) SS_DELAY(5) 
          SS_TAP(X_P)
      );
    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[64];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_PSCREEN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_S))); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_PSCREEN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: layer_on(2); break;
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: layer_off(2); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_PGUP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_PGUP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_PGDOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F1)));
        tap_code16(RCTL(RGUI(KC_F1)));
        tap_code16(RCTL(RGUI(KC_F1)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F1)));
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F1))); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F1))); register_code16(RCTL(RGUI(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F1))); register_code16(RCTL(RGUI(KC_F1)));
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F1))); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F1))); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F19)));
        tap_code16(RCTL(RGUI(KC_F19)));
        tap_code16(RCTL(RGUI(KC_F19)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F19)));
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F19))); break;
        case SINGLE_HOLD: layer_on(12); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F19))); register_code16(RCTL(RGUI(KC_F19))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F19))); register_code16(RCTL(RGUI(KC_F19)));
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F19))); break;
        case SINGLE_HOLD: layer_off(12); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F19))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F19))); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F20)));
        tap_code16(RCTL(RGUI(KC_F20)));
        tap_code16(RCTL(RGUI(KC_F20)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F20)));
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F20))); break;
        case SINGLE_HOLD: layer_on(13); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F20))); register_code16(RCTL(RGUI(KC_F20))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F20))); register_code16(RCTL(RGUI(KC_F20)));
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F20))); break;
        case SINGLE_HOLD: layer_off(13); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F20))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F20))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F21)));
        tap_code16(RCTL(RGUI(KC_F21)));
        tap_code16(RCTL(RGUI(KC_F21)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F21)));
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F21))); break;
        case SINGLE_HOLD: layer_on(14); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F21))); register_code16(RCTL(RGUI(KC_F21))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F21))); register_code16(RCTL(RGUI(KC_F21)));
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F21))); break;
        case SINGLE_HOLD: layer_off(14); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F21))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F21))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F22)));
        tap_code16(RCTL(RGUI(KC_F22)));
        tap_code16(RCTL(RGUI(KC_F22)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F22)));
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F22))); break;
        case SINGLE_HOLD: layer_on(15); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F22))); register_code16(RCTL(RGUI(KC_F22))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F22))); register_code16(RCTL(RGUI(KC_F22)));
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F22))); break;
        case SINGLE_HOLD: layer_off(15); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F22))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F22))); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F23)));
        tap_code16(RCTL(RGUI(KC_F23)));
        tap_code16(RCTL(RGUI(KC_F23)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F23)));
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F23))); break;
        case SINGLE_HOLD: layer_on(16); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F23))); register_code16(RCTL(RGUI(KC_F23))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F23))); register_code16(RCTL(RGUI(KC_F23)));
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F23))); break;
        case SINGLE_HOLD: layer_off(16); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F23))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F23))); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F24)));
        tap_code16(RCTL(RGUI(KC_F24)));
        tap_code16(RCTL(RGUI(KC_F24)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F24)));
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F24))); break;
        case SINGLE_HOLD: layer_on(17); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F24))); register_code16(RCTL(RGUI(KC_F24))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F24))); register_code16(RCTL(RGUI(KC_F24)));
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F24))); break;
        case SINGLE_HOLD: layer_off(17); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F24))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F24))); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F2)));
        tap_code16(RCTL(RGUI(KC_F2)));
        tap_code16(RCTL(RGUI(KC_F2)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F2)));
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F2))); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F2))); register_code16(RCTL(RGUI(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F2))); register_code16(RCTL(RGUI(KC_F2)));
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F2))); break;
        case SINGLE_HOLD: layer_off(5); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F2))); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F4));
        tap_code16(RGUI(KC_F4));
        tap_code16(RGUI(KC_F4));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F4));
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F4)); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F4)); register_code16(RGUI(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F4)); register_code16(RGUI(KC_F4));
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F4)); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F4)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F14));
        tap_code16(RGUI(KC_F14));
        tap_code16(RGUI(KC_F14));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F14));
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F14)); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F14)); register_code16(RGUI(KC_F14)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F14)); register_code16(RGUI(KC_F14));
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F14)); break;
        case SINGLE_HOLD: layer_off(5); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F14)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F14)); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F17));
        tap_code16(RGUI(KC_F17));
        tap_code16(RGUI(KC_F17));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F17));
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F17)); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F17)); register_code16(RGUI(KC_F17)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F17)); register_code16(RGUI(KC_F17));
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F17)); break;
        case SINGLE_HOLD: layer_off(6); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F17)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F17)); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F7));
        tap_code16(RGUI(KC_F7));
        tap_code16(RGUI(KC_F7));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F7));
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F7)); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F7)); register_code16(RGUI(KC_F7)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F7)); register_code16(RGUI(KC_F7));
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F7)); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F7)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F7)); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F9)));
        tap_code16(RCTL(RGUI(KC_F9)));
        tap_code16(RCTL(RGUI(KC_F9)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F9)));
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F9))); break;
        case SINGLE_HOLD: layer_on(8); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F9))); register_code16(RCTL(RGUI(KC_F9))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F9))); register_code16(RCTL(RGUI(KC_F9)));
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F9))); break;
        case SINGLE_HOLD: layer_off(8); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F9))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F9))); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F7)));
        tap_code16(RCTL(RGUI(KC_F7)));
        tap_code16(RCTL(RGUI(KC_F7)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F7)));
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F7))); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F7))); register_code16(RCTL(RGUI(KC_F7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F7))); register_code16(RCTL(RGUI(KC_F7)));
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F7))); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F7))); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F3)));
        tap_code16(RCTL(RGUI(KC_F3)));
        tap_code16(RCTL(RGUI(KC_F3)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F3)));
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F3))); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F3))); register_code16(RCTL(RGUI(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F3))); register_code16(RCTL(RGUI(KC_F3)));
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F3))); break;
        case SINGLE_HOLD: layer_off(6); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F3))); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F1));
        tap_code16(RGUI(KC_F1));
        tap_code16(RGUI(KC_F1));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F1));
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F1)); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F1)); register_code16(RGUI(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F1)); register_code16(RGUI(KC_F1));
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F1)); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F1)); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F9));
        tap_code16(RGUI(KC_F9));
        tap_code16(RGUI(KC_F9));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F9));
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F9)); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F9)); register_code16(RGUI(KC_F9)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F9)); register_code16(RGUI(KC_F9));
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F9)); break;
        case SINGLE_HOLD: layer_off(5); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F9)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F9)); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(qk_tap_dance_state_t *state, void *user_data);
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_21(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F10));
        tap_code16(RGUI(KC_F10));
        tap_code16(RGUI(KC_F10));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F10));
    }
}

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F10)); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F10)); register_code16(RGUI(KC_F10)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F10)); register_code16(RGUI(KC_F10));
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F10)); break;
        case SINGLE_HOLD: layer_off(6); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F10)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F10)); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(qk_tap_dance_state_t *state, void *user_data);
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_22(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F3));
        tap_code16(RGUI(KC_F3));
        tap_code16(RGUI(KC_F3));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F3));
    }
}

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F3)); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F3)); register_code16(RGUI(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F3)); register_code16(RGUI(KC_F3));
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F3)); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F3)); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(qk_tap_dance_state_t *state, void *user_data);
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_23(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F10)));
        tap_code16(RCTL(RGUI(KC_F10)));
        tap_code16(RCTL(RGUI(KC_F10)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F10)));
    }
}

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F10))); break;
        case SINGLE_HOLD: layer_on(9); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F10))); register_code16(RCTL(RGUI(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F10))); register_code16(RCTL(RGUI(KC_F10)));
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F10))); break;
        case SINGLE_HOLD: layer_off(9); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F10))); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(qk_tap_dance_state_t *state, void *user_data);
void dance_24_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_24_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_24(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F8)));
        tap_code16(RCTL(RGUI(KC_F8)));
        tap_code16(RCTL(RGUI(KC_F8)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F8)));
    }
}

void dance_24_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F8))); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F8))); register_code16(RCTL(RGUI(KC_F8))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F8))); register_code16(RCTL(RGUI(KC_F8)));
    }
}

void dance_24_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F8))); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F8))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F8))); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(qk_tap_dance_state_t *state, void *user_data);
void dance_25_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_25_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_25(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F4)));
        tap_code16(RCTL(RGUI(KC_F4)));
        tap_code16(RCTL(RGUI(KC_F4)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F4)));
    }
}

void dance_25_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F4))); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F4))); register_code16(RCTL(RGUI(KC_F4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F4))); register_code16(RCTL(RGUI(KC_F4)));
    }
}

void dance_25_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F4))); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F4))); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(qk_tap_dance_state_t *state, void *user_data);
void dance_26_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_26_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_26(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F5));
        tap_code16(RGUI(KC_F5));
        tap_code16(RGUI(KC_F5));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F5));
    }
}

void dance_26_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F5)); break;
        case SINGLE_HOLD: layer_on(8); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F5)); register_code16(RGUI(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F5)); register_code16(RGUI(KC_F5));
    }
}

void dance_26_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F5)); break;
        case SINGLE_HOLD: layer_off(8); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F5)); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(qk_tap_dance_state_t *state, void *user_data);
void dance_27_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_27_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_27(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F15));
        tap_code16(RGUI(KC_F15));
        tap_code16(RGUI(KC_F15));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F15));
    }
}

void dance_27_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F15)); break;
        case SINGLE_HOLD: layer_on(9); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F15)); register_code16(RGUI(KC_F15)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F15)); register_code16(RGUI(KC_F15));
    }
}

void dance_27_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F15)); break;
        case SINGLE_HOLD: layer_off(9); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F15)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F15)); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(qk_tap_dance_state_t *state, void *user_data);
void dance_28_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_28_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_28(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F18));
        tap_code16(RGUI(KC_F18));
        tap_code16(RGUI(KC_F18));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F18));
    }
}

void dance_28_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F18)); break;
        case SINGLE_HOLD: layer_on(10); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F18)); register_code16(RGUI(KC_F18)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F18)); register_code16(RGUI(KC_F18));
    }
}

void dance_28_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F18)); break;
        case SINGLE_HOLD: layer_off(10); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F18)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F18)); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(qk_tap_dance_state_t *state, void *user_data);
void dance_29_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_29_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_29(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F8));
        tap_code16(RGUI(KC_F8));
        tap_code16(RGUI(KC_F8));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F8));
    }
}

void dance_29_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F8)); break;
        case SINGLE_HOLD: layer_on(11); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F8)); register_code16(RGUI(KC_F8)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F8)); register_code16(RGUI(KC_F8));
    }
}

void dance_29_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F8)); break;
        case SINGLE_HOLD: layer_off(11); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F8)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F8)); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(qk_tap_dance_state_t *state, void *user_data);
void dance_30_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_30_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_30(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F11)));
        tap_code16(RCTL(RGUI(KC_F11)));
        tap_code16(RCTL(RGUI(KC_F11)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F11)));
    }
}

void dance_30_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F11))); break;
        case SINGLE_HOLD: layer_on(10); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F11))); register_code16(RCTL(RGUI(KC_F11))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F11))); register_code16(RCTL(RGUI(KC_F11)));
    }
}

void dance_30_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F11))); break;
        case SINGLE_HOLD: layer_off(10); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F11))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F11))); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(qk_tap_dance_state_t *state, void *user_data);
void dance_31_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_31_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_31(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F16)));
        tap_code16(RCTL(RGUI(KC_F16)));
        tap_code16(RCTL(RGUI(KC_F16)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F16)));
    }
}

void dance_31_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F16))); break;
        case SINGLE_HOLD: layer_on(15); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F16))); register_code16(RCTL(RGUI(KC_F16))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F16))); register_code16(RCTL(RGUI(KC_F16)));
    }
}

void dance_31_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F16))); break;
        case SINGLE_HOLD: layer_off(15); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F16))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F16))); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(qk_tap_dance_state_t *state, void *user_data);
void dance_32_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_32_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_32(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F17)));
        tap_code16(RCTL(RGUI(KC_F17)));
        tap_code16(RCTL(RGUI(KC_F17)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F17)));
    }
}

void dance_32_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F17))); break;
        case SINGLE_HOLD: layer_on(16); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F17))); register_code16(RCTL(RGUI(KC_F17))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F17))); register_code16(RCTL(RGUI(KC_F17)));
    }
}

void dance_32_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F17))); break;
        case SINGLE_HOLD: layer_off(16); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F17))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F17))); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(qk_tap_dance_state_t *state, void *user_data);
void dance_33_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_33_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_33(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(KC_F18)));
        tap_code16(RCTL(RGUI(KC_F18)));
        tap_code16(RCTL(RGUI(KC_F18)));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(KC_F18)));
    }
}

void dance_33_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(KC_F18))); break;
        case SINGLE_HOLD: layer_on(17); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(KC_F18))); register_code16(RCTL(RGUI(KC_F18))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(KC_F18))); register_code16(RCTL(RGUI(KC_F18)));
    }
}

void dance_33_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F18))); break;
        case SINGLE_HOLD: layer_off(17); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(KC_F18))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(KC_F18))); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(qk_tap_dance_state_t *state, void *user_data);
void dance_34_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_34_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_34(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F19))));
        tap_code16(RCTL(RGUI(RSFT(KC_F19))));
        tap_code16(RCTL(RGUI(RSFT(KC_F19))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F19))));
    }
}

void dance_34_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F19)))); break;
        case SINGLE_HOLD: layer_on(12); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F19)))); register_code16(RCTL(RGUI(RSFT(KC_F19)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F19)))); register_code16(RCTL(RGUI(RSFT(KC_F19))));
    }
}

void dance_34_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F19)))); break;
        case SINGLE_HOLD: layer_off(12); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F19)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F19)))); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(qk_tap_dance_state_t *state, void *user_data);
void dance_35_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_35_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_35(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F20))));
        tap_code16(RCTL(RGUI(RSFT(KC_F20))));
        tap_code16(RCTL(RGUI(RSFT(KC_F20))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F20))));
    }
}

void dance_35_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F20)))); break;
        case SINGLE_HOLD: layer_on(13); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F20)))); register_code16(RCTL(RGUI(RSFT(KC_F20)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F20)))); register_code16(RCTL(RGUI(RSFT(KC_F20))));
    }
}

void dance_35_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F20)))); break;
        case SINGLE_HOLD: layer_off(13); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F20)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F20)))); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(qk_tap_dance_state_t *state, void *user_data);
void dance_36_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_36_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_36(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F21))));
        tap_code16(RCTL(RGUI(RSFT(KC_F21))));
        tap_code16(RCTL(RGUI(RSFT(KC_F21))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F21))));
    }
}

void dance_36_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F21)))); break;
        case SINGLE_HOLD: layer_on(14); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F21)))); register_code16(RCTL(RGUI(RSFT(KC_F21)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F21)))); register_code16(RCTL(RGUI(RSFT(KC_F21))));
    }
}

void dance_36_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F21)))); break;
        case SINGLE_HOLD: layer_off(14); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F21)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F21)))); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(qk_tap_dance_state_t *state, void *user_data);
void dance_37_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_37_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_37(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F22))));
        tap_code16(RCTL(RGUI(RSFT(KC_F22))));
        tap_code16(RCTL(RGUI(RSFT(KC_F22))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F22))));
    }
}

void dance_37_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F22)))); break;
        case SINGLE_HOLD: layer_on(15); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F22)))); register_code16(RCTL(RGUI(RSFT(KC_F22)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F22)))); register_code16(RCTL(RGUI(RSFT(KC_F22))));
    }
}

void dance_37_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F22)))); break;
        case SINGLE_HOLD: layer_off(15); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F22)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F22)))); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(qk_tap_dance_state_t *state, void *user_data);
void dance_38_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_38_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_38(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F23))));
        tap_code16(RCTL(RGUI(RSFT(KC_F23))));
        tap_code16(RCTL(RGUI(RSFT(KC_F23))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F23))));
    }
}

void dance_38_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F23)))); break;
        case SINGLE_HOLD: layer_on(16); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F23)))); register_code16(RCTL(RGUI(RSFT(KC_F23)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F23)))); register_code16(RCTL(RGUI(RSFT(KC_F23))));
    }
}

void dance_38_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F23)))); break;
        case SINGLE_HOLD: layer_off(16); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F23)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F23)))); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(qk_tap_dance_state_t *state, void *user_data);
void dance_39_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_39_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_39(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F24))));
        tap_code16(RCTL(RGUI(RSFT(KC_F24))));
        tap_code16(RCTL(RGUI(RSFT(KC_F24))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F24))));
    }
}

void dance_39_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F24)))); break;
        case SINGLE_HOLD: layer_on(17); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F24)))); register_code16(RCTL(RGUI(RSFT(KC_F24)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F24)))); register_code16(RCTL(RGUI(RSFT(KC_F24))));
    }
}

void dance_39_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F24)))); break;
        case SINGLE_HOLD: layer_off(17); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F24)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F24)))); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(qk_tap_dance_state_t *state, void *user_data);
void dance_40_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_40_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_40(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(KC_F1));
        tap_code16(RGUI(KC_F1));
        tap_code16(RGUI(KC_F1));
    }
    if(state->count > 3) {
        tap_code16(RGUI(KC_F1));
    }
}

void dance_40_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(RGUI(KC_F1)); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_F1)); register_code16(RGUI(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(KC_F1)); register_code16(RGUI(KC_F1));
    }
}

void dance_40_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(RGUI(KC_F1)); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(KC_F1)); break;
    }
    dance_state[40].step = 0;
}
void on_dance_41(qk_tap_dance_state_t *state, void *user_data);
void dance_41_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_41_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_41(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F7)));
        tap_code16(RALT(RGUI(KC_F7)));
        tap_code16(RALT(RGUI(KC_F7)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F7)));
    }
}

void dance_41_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[41].step = dance_step(state);
    switch (dance_state[41].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F7))); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F7))); register_code16(RALT(RGUI(KC_F7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F7))); register_code16(RALT(RGUI(KC_F7)));
    }
}

void dance_41_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[41].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F7))); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F7))); break;
    }
    dance_state[41].step = 0;
}
void on_dance_42(qk_tap_dance_state_t *state, void *user_data);
void dance_42_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_42_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_42(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F9)));
        tap_code16(RALT(RGUI(KC_F9)));
        tap_code16(RALT(RGUI(KC_F9)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F9)));
    }
}

void dance_42_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[42].step = dance_step(state);
    switch (dance_state[42].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F9))); break;
        case SINGLE_HOLD: layer_on(8); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F9))); register_code16(RALT(RGUI(KC_F9))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F9))); register_code16(RALT(RGUI(KC_F9)));
    }
}

void dance_42_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[42].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F9))); break;
        case SINGLE_HOLD: layer_off(8); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F9))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F9))); break;
    }
    dance_state[42].step = 0;
}
void on_dance_43(qk_tap_dance_state_t *state, void *user_data);
void dance_43_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_43_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_43(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F4)));
        tap_code16(RGUI(RSFT(KC_F4)));
        tap_code16(RGUI(RSFT(KC_F4)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F4)));
    }
}

void dance_43_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[43].step = dance_step(state);
    switch (dance_state[43].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F4))); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F4))); register_code16(RGUI(RSFT(KC_F4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F4))); register_code16(RGUI(RSFT(KC_F4)));
    }
}

void dance_43_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[43].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F4))); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F4))); break;
    }
    dance_state[43].step = 0;
}
void on_dance_44(qk_tap_dance_state_t *state, void *user_data);
void dance_44_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_44_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_44(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F14)));
        tap_code16(RGUI(RSFT(KC_F14)));
        tap_code16(RGUI(RSFT(KC_F14)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F14)));
    }
}

void dance_44_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[44].step = dance_step(state);
    switch (dance_state[44].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F14))); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F14))); register_code16(RGUI(RSFT(KC_F14))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F14))); register_code16(RGUI(RSFT(KC_F14)));
    }
}

void dance_44_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[44].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F14))); break;
        case SINGLE_HOLD: layer_off(5); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F14))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F14))); break;
    }
    dance_state[44].step = 0;
}
void on_dance_45(qk_tap_dance_state_t *state, void *user_data);
void dance_45_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_45_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_45(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F17)));
        tap_code16(RGUI(RSFT(KC_F17)));
        tap_code16(RGUI(RSFT(KC_F17)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F17)));
    }
}

void dance_45_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[45].step = dance_step(state);
    switch (dance_state[45].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F17))); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F17))); register_code16(RGUI(RSFT(KC_F17))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F17))); register_code16(RGUI(RSFT(KC_F17)));
    }
}

void dance_45_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[45].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F17))); break;
        case SINGLE_HOLD: layer_off(6); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F17))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F17))); break;
    }
    dance_state[45].step = 0;
}
void on_dance_46(qk_tap_dance_state_t *state, void *user_data);
void dance_46_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_46_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_46(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F7)));
        tap_code16(RGUI(RSFT(KC_F7)));
        tap_code16(RGUI(RSFT(KC_F7)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F7)));
    }
}

void dance_46_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[46].step = dance_step(state);
    switch (dance_state[46].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F7))); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F7))); register_code16(RGUI(RSFT(KC_F7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F7))); register_code16(RGUI(RSFT(KC_F7)));
    }
}

void dance_46_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[46].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F7))); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F7))); break;
    }
    dance_state[46].step = 0;
}
void on_dance_47(qk_tap_dance_state_t *state, void *user_data);
void dance_47_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_47_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_47(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F2)));
        tap_code16(RALT(RGUI(KC_F2)));
        tap_code16(RALT(RGUI(KC_F2)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F2)));
    }
}

void dance_47_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[47].step = dance_step(state);
    switch (dance_state[47].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F2))); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F2))); register_code16(RALT(RGUI(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F2))); register_code16(RALT(RGUI(KC_F2)));
    }
}

void dance_47_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[47].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F2))); break;
        case SINGLE_HOLD: layer_off(5); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F2))); break;
    }
    dance_state[47].step = 0;
}
void on_dance_48(qk_tap_dance_state_t *state, void *user_data);
void dance_48_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_48_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_48(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F8)));
        tap_code16(RALT(RGUI(KC_F8)));
        tap_code16(RALT(RGUI(KC_F8)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F8)));
    }
}

void dance_48_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[48].step = dance_step(state);
    switch (dance_state[48].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F8))); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F8))); register_code16(RALT(RGUI(KC_F8))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F8))); register_code16(RALT(RGUI(KC_F8)));
    }
}

void dance_48_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[48].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F8))); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F8))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F8))); break;
    }
    dance_state[48].step = 0;
}
void on_dance_49(qk_tap_dance_state_t *state, void *user_data);
void dance_49_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_49_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_49(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F10)));
        tap_code16(RALT(RGUI(KC_F10)));
        tap_code16(RALT(RGUI(KC_F10)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F10)));
    }
}

void dance_49_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[49].step = dance_step(state);
    switch (dance_state[49].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F10))); break;
        case SINGLE_HOLD: layer_on(9); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F10))); register_code16(RALT(RGUI(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F10))); register_code16(RALT(RGUI(KC_F10)));
    }
}

void dance_49_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[49].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F10))); break;
        case SINGLE_HOLD: layer_off(9); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F10))); break;
    }
    dance_state[49].step = 0;
}
void on_dance_50(qk_tap_dance_state_t *state, void *user_data);
void dance_50_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_50_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_50(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F1)));
        tap_code16(RGUI(RSFT(KC_F1)));
        tap_code16(RGUI(RSFT(KC_F1)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F1)));
    }
}

void dance_50_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[50].step = dance_step(state);
    switch (dance_state[50].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F1))); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F1))); register_code16(RGUI(RSFT(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F1))); register_code16(RGUI(RSFT(KC_F1)));
    }
}

void dance_50_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[50].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F1))); break;
        case SINGLE_HOLD: layer_off(4); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F1))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F1))); break;
    }
    dance_state[50].step = 0;
}
void on_dance_51(qk_tap_dance_state_t *state, void *user_data);
void dance_51_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_51_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_51(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F9)));
        tap_code16(RGUI(RSFT(KC_F9)));
        tap_code16(RGUI(RSFT(KC_F9)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F9)));
    }
}

void dance_51_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[51].step = dance_step(state);
    switch (dance_state[51].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F9))); break;
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F9))); register_code16(RGUI(RSFT(KC_F9))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F9))); register_code16(RGUI(RSFT(KC_F9)));
    }
}

void dance_51_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[51].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F9))); break;
        case SINGLE_HOLD: layer_off(5); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F9))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F9))); break;
    }
    dance_state[51].step = 0;
}
void on_dance_52(qk_tap_dance_state_t *state, void *user_data);
void dance_52_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_52_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_52(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F10)));
        tap_code16(RGUI(RSFT(KC_F10)));
        tap_code16(RGUI(RSFT(KC_F10)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F10)));
    }
}

void dance_52_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[52].step = dance_step(state);
    switch (dance_state[52].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F10))); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F10))); register_code16(RGUI(RSFT(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F10))); register_code16(RGUI(RSFT(KC_F10)));
    }
}

void dance_52_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[52].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F10))); break;
        case SINGLE_HOLD: layer_off(6); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F10))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F10))); break;
    }
    dance_state[52].step = 0;
}
void on_dance_53(qk_tap_dance_state_t *state, void *user_data);
void dance_53_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_53_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_53(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F3)));
        tap_code16(RGUI(RSFT(KC_F3)));
        tap_code16(RGUI(RSFT(KC_F3)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F3)));
    }
}

void dance_53_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[53].step = dance_step(state);
    switch (dance_state[53].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F3))); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F3))); register_code16(RGUI(RSFT(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F3))); register_code16(RGUI(RSFT(KC_F3)));
    }
}

void dance_53_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[53].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F3))); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F3))); break;
    }
    dance_state[53].step = 0;
}
void on_dance_54(qk_tap_dance_state_t *state, void *user_data);
void dance_54_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_54_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_54(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F3)));
        tap_code16(RALT(RGUI(KC_F3)));
        tap_code16(RALT(RGUI(KC_F3)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F3)));
    }
}

void dance_54_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[54].step = dance_step(state);
    switch (dance_state[54].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F3))); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F3))); register_code16(RALT(RGUI(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F3))); register_code16(RALT(RGUI(KC_F3)));
    }
}

void dance_54_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[54].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F3))); break;
        case SINGLE_HOLD: layer_off(6); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F3))); break;
    }
    dance_state[54].step = 0;
}
void on_dance_55(qk_tap_dance_state_t *state, void *user_data);
void dance_55_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_55_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_55(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F11)));
        tap_code16(RALT(RGUI(KC_F11)));
        tap_code16(RALT(RGUI(KC_F11)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F11)));
    }
}

void dance_55_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[55].step = dance_step(state);
    switch (dance_state[55].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F11))); break;
        case SINGLE_HOLD: layer_on(10); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F11))); register_code16(RALT(RGUI(KC_F11))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F11))); register_code16(RALT(RGUI(KC_F11)));
    }
}

void dance_55_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[55].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F11))); break;
        case SINGLE_HOLD: layer_off(10); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F11))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F11))); break;
    }
    dance_state[55].step = 0;
}
void on_dance_56(qk_tap_dance_state_t *state, void *user_data);
void dance_56_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_56_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_56(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F5)));
        tap_code16(RGUI(RSFT(KC_F5)));
        tap_code16(RGUI(RSFT(KC_F5)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F5)));
    }
}

void dance_56_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[56].step = dance_step(state);
    switch (dance_state[56].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F5))); break;
        case SINGLE_HOLD: layer_on(8); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F5))); register_code16(RGUI(RSFT(KC_F5))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F5))); register_code16(RGUI(RSFT(KC_F5)));
    }
}

void dance_56_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[56].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F5))); break;
        case SINGLE_HOLD: layer_off(8); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F5))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F5))); break;
    }
    dance_state[56].step = 0;
}
void on_dance_57(qk_tap_dance_state_t *state, void *user_data);
void dance_57_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_57_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_57(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F15)));
        tap_code16(RGUI(RSFT(KC_F15)));
        tap_code16(RGUI(RSFT(KC_F15)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F15)));
    }
}

void dance_57_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[57].step = dance_step(state);
    switch (dance_state[57].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F15))); break;
        case SINGLE_HOLD: layer_on(9); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F15))); register_code16(RGUI(RSFT(KC_F15))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F15))); register_code16(RGUI(RSFT(KC_F15)));
    }
}

void dance_57_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[57].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F15))); break;
        case SINGLE_HOLD: layer_off(9); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F15))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F15))); break;
    }
    dance_state[57].step = 0;
}
void on_dance_58(qk_tap_dance_state_t *state, void *user_data);
void dance_58_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_58_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_58(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F18)));
        tap_code16(RGUI(RSFT(KC_F18)));
        tap_code16(RGUI(RSFT(KC_F18)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F18)));
    }
}

void dance_58_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[58].step = dance_step(state);
    switch (dance_state[58].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F18))); break;
        case SINGLE_HOLD: layer_on(10); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F18))); register_code16(RGUI(RSFT(KC_F18))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F18))); register_code16(RGUI(RSFT(KC_F18)));
    }
}

void dance_58_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[58].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F18))); break;
        case SINGLE_HOLD: layer_off(10); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F18))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F18))); break;
    }
    dance_state[58].step = 0;
}
void on_dance_59(qk_tap_dance_state_t *state, void *user_data);
void dance_59_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_59_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_59(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RGUI(RSFT(KC_F8)));
        tap_code16(RGUI(RSFT(KC_F8)));
        tap_code16(RGUI(RSFT(KC_F8)));
    }
    if(state->count > 3) {
        tap_code16(RGUI(RSFT(KC_F8)));
    }
}

void dance_59_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[59].step = dance_step(state);
    switch (dance_state[59].step) {
        case SINGLE_TAP: register_code16(RGUI(RSFT(KC_F8))); break;
        case SINGLE_HOLD: layer_on(11); break;
        case DOUBLE_TAP: register_code16(RGUI(RSFT(KC_F8))); register_code16(RGUI(RSFT(KC_F8))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RGUI(RSFT(KC_F8))); register_code16(RGUI(RSFT(KC_F8)));
    }
}

void dance_59_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[59].step) {
        case SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F8))); break;
        case SINGLE_HOLD: layer_off(11); break;
        case DOUBLE_TAP: unregister_code16(RGUI(RSFT(KC_F8))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RGUI(RSFT(KC_F8))); break;
    }
    dance_state[59].step = 0;
}
void on_dance_60(qk_tap_dance_state_t *state, void *user_data);
void dance_60_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_60_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_60(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RALT(RGUI(KC_F4)));
        tap_code16(RALT(RGUI(KC_F4)));
        tap_code16(RALT(RGUI(KC_F4)));
    }
    if(state->count > 3) {
        tap_code16(RALT(RGUI(KC_F4)));
    }
}

void dance_60_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[60].step = dance_step(state);
    switch (dance_state[60].step) {
        case SINGLE_TAP: register_code16(RALT(RGUI(KC_F4))); break;
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_TAP: register_code16(RALT(RGUI(KC_F4))); register_code16(RALT(RGUI(KC_F4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RALT(RGUI(KC_F4))); register_code16(RALT(RGUI(KC_F4)));
    }
}

void dance_60_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[60].step) {
        case SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F4))); break;
        case SINGLE_HOLD: layer_off(7); break;
        case DOUBLE_TAP: unregister_code16(RALT(RGUI(KC_F4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RALT(RGUI(KC_F4))); break;
    }
    dance_state[60].step = 0;
}
void on_dance_61(qk_tap_dance_state_t *state, void *user_data);
void dance_61_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_61_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_61(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F16))));
        tap_code16(RCTL(RGUI(RSFT(KC_F16))));
        tap_code16(RCTL(RGUI(RSFT(KC_F16))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F16))));
    }
}

void dance_61_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[61].step = dance_step(state);
    switch (dance_state[61].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F16)))); break;
        case SINGLE_HOLD: layer_on(15); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F16)))); register_code16(RCTL(RGUI(RSFT(KC_F16)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F16)))); register_code16(RCTL(RGUI(RSFT(KC_F16))));
    }
}

void dance_61_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[61].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F16)))); break;
        case SINGLE_HOLD: layer_off(15); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F16)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F16)))); break;
    }
    dance_state[61].step = 0;
}
void on_dance_62(qk_tap_dance_state_t *state, void *user_data);
void dance_62_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_62_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_62(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F17))));
        tap_code16(RCTL(RGUI(RSFT(KC_F17))));
        tap_code16(RCTL(RGUI(RSFT(KC_F17))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F17))));
    }
}

void dance_62_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[62].step = dance_step(state);
    switch (dance_state[62].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F17)))); break;
        case SINGLE_HOLD: layer_on(16); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F17)))); register_code16(RCTL(RGUI(RSFT(KC_F17)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F17)))); register_code16(RCTL(RGUI(RSFT(KC_F17))));
    }
}

void dance_62_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[62].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F17)))); break;
        case SINGLE_HOLD: layer_off(16); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F17)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F17)))); break;
    }
    dance_state[62].step = 0;
}
void on_dance_63(qk_tap_dance_state_t *state, void *user_data);
void dance_63_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_63_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_63(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F18))));
        tap_code16(RCTL(RGUI(RSFT(KC_F18))));
        tap_code16(RCTL(RGUI(RSFT(KC_F18))));
    }
    if(state->count > 3) {
        tap_code16(RCTL(RGUI(RSFT(KC_F18))));
    }
}

void dance_63_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[63].step = dance_step(state);
    switch (dance_state[63].step) {
        case SINGLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F18)))); break;
        case SINGLE_HOLD: layer_on(17); break;
        case DOUBLE_TAP: register_code16(RCTL(RGUI(RSFT(KC_F18)))); register_code16(RCTL(RGUI(RSFT(KC_F18)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RCTL(RGUI(RSFT(KC_F18)))); register_code16(RCTL(RGUI(RSFT(KC_F18))));
    }
}

void dance_63_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[63].step) {
        case SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F18)))); break;
        case SINGLE_HOLD: layer_off(17); break;
        case DOUBLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F18)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RCTL(RGUI(RSFT(KC_F18)))); break;
    }
    dance_state[63].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
        [DANCE_39] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_39, dance_39_finished, dance_39_reset),
        [DANCE_40] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_40, dance_40_finished, dance_40_reset),
        [DANCE_41] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_41, dance_41_finished, dance_41_reset),
        [DANCE_42] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_42, dance_42_finished, dance_42_reset),
        [DANCE_43] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_43, dance_43_finished, dance_43_reset),
        [DANCE_44] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_44, dance_44_finished, dance_44_reset),
        [DANCE_45] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_45, dance_45_finished, dance_45_reset),
        [DANCE_46] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_46, dance_46_finished, dance_46_reset),
        [DANCE_47] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_47, dance_47_finished, dance_47_reset),
        [DANCE_48] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_48, dance_48_finished, dance_48_reset),
        [DANCE_49] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_49, dance_49_finished, dance_49_reset),
        [DANCE_50] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_50, dance_50_finished, dance_50_reset),
        [DANCE_51] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_51, dance_51_finished, dance_51_reset),
        [DANCE_52] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_52, dance_52_finished, dance_52_reset),
        [DANCE_53] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_53, dance_53_finished, dance_53_reset),
        [DANCE_54] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_54, dance_54_finished, dance_54_reset),
        [DANCE_55] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_55, dance_55_finished, dance_55_reset),
        [DANCE_56] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_56, dance_56_finished, dance_56_reset),
        [DANCE_57] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_57, dance_57_finished, dance_57_reset),
        [DANCE_58] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_58, dance_58_finished, dance_58_reset),
        [DANCE_59] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_59, dance_59_finished, dance_59_reset),
        [DANCE_60] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_60, dance_60_finished, dance_60_reset),
        [DANCE_61] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_61, dance_61_finished, dance_61_reset),
        [DANCE_62] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_62, dance_62_finished, dance_62_reset),
        [DANCE_63] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_63, dance_63_finished, dance_63_reset),
};

