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
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

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

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  DE_LSPO,
  DE_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    OSL(9),         KC_ESCAPE,      KC_2,           KC_3,           KC_4,           KC_5,           KC_LSHIFT,                                      KC_RSHIFT,      KC_6,           KC_7,           KC_8,           KC_9,           KC_SYSTEM_SLEEP,OSL(9),
    TG(9),          KC_1,           KC_V,           KC_L,           KC_C,           KC_W,           LSFT(KC_TAB),                                   DE_SS,          KC_K,           KC_H,           KC_G,           KC_F,           KC_0,           TG(9),
    TO(3),          KC_X,           KC_I,           KC_A,           KC_E,           KC_O,                                                                           KC_S,           KC_N,           KC_R,           KC_T,           KC_Q,           TO(2),
    KC_TRANSPARENT, KC_U,           DE_OE,          DE_AE,          KC_P,           DE_Z,           KC_TAB,                                         DE_Y,           KC_B,           KC_M,           KC_COMMA,       KC_DOT,         KC_D,           TO(1),
    TG(8),          DE_UE,          TG(7),          KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        TG(6),          KC_J,           TG(8),
                                                                                                    KC_LCTRL,       KC_LALT,        OSL(8),         TG(8),
                                                                                                                    KC_HOME,        KC_PGUP,
                                                                                    LT(7,KC_BSPACE),LT(9,KC_DELETE),KC_END,         KC_PGDOWN,      LT(9,KC_ENTER), LT(6,KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, TG(5),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TG(4),          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_LGUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LT(5,KC_BSPACE),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(4,KC_SPACE)
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_LGUI),  MO(4),          OSL(5),         OSM(MOD_LCTL),  KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_RCTL),  OSL(4),         MO(5),          OSM(MOD_RGUI),  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, OSM(MOD_LALT),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_RALT),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, TG(5),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TG(4),          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_LGUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_LCTL),  MO(6),          OSL(7),         OSM(MOD_HYPR),  KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_HYPR),  OSL(6),         MO(7),          OSM(MOD_RCTL),  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, OSM(MOD_LALT),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_RALT),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, TG(7),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TG(6),          KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          DE_UNDS,        RALT(KC_5),     RALT(KC_6),     KC_NO,          KC_NO,                                          LSFT(KC_TAB),   LGUI(KC_C),     LSFT(KC_HOME),  LALT(LSFT(KC_UP)),LSFT(KC_PGUP),  KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, DE_PARA,        DE_SLSH,        RALT(KC_8),     RALT(KC_9),     DE_ASTR,                                                                        LGUI(KC_V),     LALT(LSFT(KC_LEFT)),LALT(LSFT(KC_DOWN)),LALT(LSFT(KC_RIGHT)),KC_NO,          KC_TRANSPARENT,
    TO(0),          LALT(LSFT(KC_7)),DE_DLR,         LALT(KC_7),     RALT(KC_N),     DE_GRV,         RALT(RSFT(DE_UE)),                                KC_TAB,         LGUI(KC_X),     LSFT(KC_END),   LGUI(KC_TAB),   LSFT(KC_PGDOWN),KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, RALT(RSFT(KC_3)),KC_NO,          LALT(LSFT(KC_LEFT)),LALT(LSFT(KC_RIGHT)),                                                                                                LALT(LSFT(KC_UP)),LALT(LSFT(KC_DOWN)),KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LSFT(KC_HOME),  LSFT(KC_PGUP),
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_END),   LSFT(KC_PGDOWN),KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_S)),LCTL(KC_F4),    LGUI(LSFT(KC_4)),KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(LGUI(KC_F)),LALT(KC_HOME),  LALT(KC_UP),    LALT(KC_PGUP),  LGUI(KC_C),     KC_TRANSPARENT,                                 DE_EURO,        DE_EXLM,        KC_NONUS_BSLASH,RSFT(KC_NONUS_BSLASH),DE_EQL,         KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_F2),    LALT(KC_LEFT),  LALT(KC_DOWN),  LALT(KC_RIGHT), LGUI(KC_V),                                                                     DE_QST,         DE_LPRN,        DE_RPRN,        KC_KP_MINUS,    DE_AMPR,        KC_TRANSPARENT,
    TO(0),          LCTL(KC_F3),    LALT(KC_END),   LGUI(KC_TAB),   LALT(KC_PGDOWN),LGUI(KC_X),     KC_TRANSPARENT,                                 RALT(KC_L),     KC_KP_PLUS,     DE_PERC,        DE_DQOT,        DE_QUOT,        DE_ACUT,        KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_Q),     KC_TRANSPARENT, LALT(KC_LEFT),  LALT(KC_RIGHT),                                                                                                 LALT(KC_UP),    LALT(KC_DOWN),  KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_LCTRL,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        LSFT_T(KC_ENTER),KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          DE_UNDS,        DE_LBRC,        DE_RBRC,        DE_CIRC,        KC_NO,                                          LSFT(KC_TAB),   LCTL(KC_C),     LCTL(LSFT(KC_HOME)),LCTL(LSFT(KC_UP)),LSFT(KC_PGUP),  KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, DE_PARA,        DE_SLSH,        DE_LCBR,        DE_RCBR,        DE_ASTR,                                                                        LCTL(KC_V),     LCTL(LSFT(KC_LEFT)),LCTL(LSFT(KC_DOWN)),LCTL(LSFT(KC_RIGHT)),KC_NO,          KC_TRANSPARENT,
    TO(0),          DE_BSLS,        DE_DLR,         DE_PIPE,        DE_TILD,        DE_GRV,         DE_RING,                                        KC_TAB,         LCTL(KC_X),     LCTL(LSFT(KC_END)),LALT(LCTL(KC_TAB)),LSFT(KC_PGDOWN),LALT(KC_F4),    KC_TRANSPARENT,
    KC_TRANSPARENT, DE_HASH,        KC_NO,          LCTL(LSFT(KC_LEFT)),LCTL(LSFT(KC_RIGHT)),                                                                                                LCTL(LSFT(KC_UP)),LCTL(LSFT(KC_DOWN)),KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LCTL(LSFT(KC_HOME)),LSFT(KC_PGUP),
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_END)),LSFT(KC_PGDOWN),KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(KC_2)),LALT(LGUI(KC_3)),LALT(LGUI(KC_4)),LALT(LGUI(KC_5)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LGUI(KC_1)),LCTL(KC_HOME),  LCTL(KC_UP),    LCTL(KC_PGUP),  LCTL(KC_C),     KC_TRANSPARENT,                                 DE_EURO,        DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(KC_X),     LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_RIGHT), LCTL(KC_V),                                                                     DE_QST,         DE_LPRN,        DE_RPRN,        KC_KP_MINUS,    DE_AMPR,        KC_TRANSPARENT,
    TO(0),          LGUI(KC_D),     LCTL(KC_END),   LALT(LCTL(KC_TAB)),LCTL(KC_PGDOWN),LCTL(KC_X),     KC_TRANSPARENT,                                 DE_AT,          KC_KP_PLUS,     DE_PERC,        DE_DQOT,        DE_QUOT,        DE_ACUT,        KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_F4),    KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_RIGHT),                                                                                                 LCTL(KC_UP),    LCTL(KC_DOWN),  KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_TRANSPARENT,
                                                                                                                    LCTL(KC_HOME),  KC_LALT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_END),   KC_LCTRL,       LSFT_T(KC_ENTER),KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          DE_EURO,        KC_KP_SLASH,    KC_KP_ASTERISK, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_HOME,        KC_UP,          KC_PGUP,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          DE_COLN,        KC_7,           KC_8,           KC_9,           KC_KP_EQUAL,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_COMMA,       KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_END,         KC_TRANSPARENT, KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_DOT,         KC_1,           KC_2,           KC_3,           KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_NO,          KC_KP_ENTER,    KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LSA_T(KC_BSPACE),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI_T(KC_0)
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_ASON,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,                                KC_AUDIO_VOL_UP,KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ASOFF,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         KC_F13,         KC_F14,         KC_F15,         RGB_VAD,                                        RGB_VAI,        KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         KC_F2,          KC_F3,          KC_F4,          KC_F5,                                                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F20,         KC_TRANSPARENT,
    TO(0),          KC_F1,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,                                KC_BRIGHTNESS_UP,LED_LEVEL,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_TRANSPARENT,
    KC_MS_BTN1,     WEBUSB_PAIR,    KC_MS_BTN1,     KC_MS_LEFT,     KC_MS_RIGHT,                                                                                                    KC_MS_UP,       KC_MS_DOWN,     KC_MS_BTN2,     RESET,          RCTL(KC_R),
                                                                                                    KC_ASRP,        KC_ASUP,        KC_MS_ACCEL1,   KC_MS_ACCEL2,
                                                                                                                    KC_ASDN,        KC_MS_ACCEL0,
                                                                                    KC_MS_BTN1,     KC_TRANSPARENT, LCTL(KC_KP_MINUS),LCTL(KC_KP_PLUS),KC_TRANSPARENT, KC_MS_BTN2
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0} },

    [2] = { {43,255,255}, {43,255,255}, {43,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0} },

    [3] = { {43,255,255}, {43,255,255}, {43,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0} },

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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DE_LSPO:
      perform_space_cadet(record, KC_LSFT, KC_LSFT, KC_8);
      return false;
    case DE_RSPC:
      perform_space_cadet(record, KC_LSFT, KC_LSFT, KC_9);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

;
