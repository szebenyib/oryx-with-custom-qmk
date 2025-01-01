#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

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
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_5,
  DANCE_8,
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_6,
  DANCE_7,
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
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),                                    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           HU_Z,           HU_AA,          TD(DANCE_11),   
    HU_OO,          MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_RGUI, KC_O),TD(DANCE_12),   
    KC_LEFT_CTRL,   HU_Y,           HU_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           HU_COMM,        HU_DOT,         HU_EE,          TD(DANCE_13),   
                                                    LT(1,KC_SPACE), LT(6,KC_TAB),                                   KC_BSPC,        LT(2,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    LGUI(KC_F),     KC_NO,          ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,                                     KC_TRANSPARENT, KC_TRANSPARENT, HU_PLUS,        HU_MINS,        HU_BSLS,        QK_LLCK,        
    ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,                                     KC_NO,          HU_7,           HU_8,           HU_9,           HU_ASTR,        KC_TRANSPARENT, 
    LGUI(KC_LEFT),  LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_RIGHT),                                 KC_MS_BTN1,     HU_4,           HU_5,           HU_6,           HU_SLSH,        KC_TRANSPARENT, 
    KC_DELETE,      LGUI(KC_5),     LGUI(HU_6),     LGUI(HU_7),     LGUI(HU_8),     KC_MS_BTN1,                                     KC_NO,          HU_1,           HU_2,           HU_3,           HU_DOT,         CW_TOGG,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, HU_0
  ),
  [2] = LAYOUT_voyager(
    HU_AMPR,        HU_SCLN,        HU_LBRC,        HU_RBRC,        HU_PIPE,        HU_AT,                                          RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        KC_NO,          QK_LLCK,        
    HU_TILD,        HU_0,           HU_CIRC,        HU_EXLM,        HU_QUOT,        HU_DLR,                                         KC_NO,          KC_HOME,        KC_END,         KC_NO,          RGB_VAD,        RGB_VAI,        
    KC_AUDIO_VOL_UP,HU_HASH,        HU_LPRN,        HU_RPRN,        HU_MINS,        HU_EQL,                                         KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_UP,          KC_NO,          
    KC_AUDIO_VOL_DOWN,HU_LESS,        HU_MORE,        HU_LCBR,        HU_RCBR,        HU_DQOT,                                        KC_NO,          KC_PGDN,        KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_RIGHT,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   TD(DANCE_18),                                   TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),   
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           HU_Z,           KC_U,           KC_I,           KC_O,           KC_P,           KC_F12,         
    KC_LEFT_SHIFT,  MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LGUI, KC_SCLN),MT(MOD_RSFT, KC_QUOTE),
    KC_LEFT_CTRL,   HU_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RALT, KC_SLASH),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, TD(DANCE_25),   KC_F5,          KC_F6,          KC_F7,          KC_F8,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_26),   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_27),   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        KC_NO,          QK_LLCK,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HU_OEE,         HU_OE,          KC_TRANSPARENT,                                 KC_NO,          KC_HOME,        KC_END,         KC_NO,          RGB_VAD,        RGB_VAI,        
    KC_AUDIO_VOL_UP,KC_TRANSPARENT, HU_OO,          HU_AA,          HU_EE,          KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_UP,          KC_NO,          
    KC_AUDIO_VOL_DOWN,HU_II,          HU_UU,          HU_UEE,         HU_UE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_RIGHT,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HU_OEE,         HU_OE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, HU_OO,          HU_AA,          HU_EE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, HU_II,          HU_UU,          HU_UEE,         HU_UE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_P, KC_W, COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LCTL, KC_E), MT(MOD_LALT, KC_I), COMBO_END};
const uint16_t PROGMEM combo3[] = { MT(MOD_RSFT, KC_N), MT(MOD_LCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_F, KC_W, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_U, HU_Z, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_L, HU_Z, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, HU_OO),
    COMBO(combo2, OSL(6)),
    COMBO(combo3, OSL(7)),
    COMBO(combo4, KC_CAPS),
    COMBO(combo5, HU_OEE),
    COMBO(combo6, HU_EE),
    COMBO(combo7, HU_AA),
    COMBO(combo8, HU_II),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_T):
            return TAPPING_TERM -40;
        case LT(1,KC_SPACE):
            return TAPPING_TERM -20;
        case LT(6,KC_TAB):
            return TAPPING_TERM -80;
        case HU_AA:
            return TAPPING_TERM -50;
        case MT(MOD_RSFT, KC_N):
            return TAPPING_TERM -40;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,240,247}, {18,255,255}, {210,255,255}, {210,255,255}, {210,255,255}, {84,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {40,242,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {40,242,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {74,245,255}, {74,245,255}, {18,255,255}, {18,255,255}, {210,255,255}, {18,255,255}, {18,255,255}, {18,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {130,255,255}, {74,245,255}, {74,245,255} },

    [1] = { {253,215,255}, {0,0,0}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {195,255,255}, {253,215,255}, {162,207,255}, {162,207,255}, {162,207,255}, {162,207,255}, {253,215,255}, {26,255,255}, {162,207,255}, {162,207,255}, {162,207,255}, {162,207,255}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {104,209,240}, {104,209,240}, {104,209,240}, {0,0,0}, {0,0,0}, {139,255,255}, {104,209,240}, {104,209,240}, {104,209,240}, {0,0,0}, {0,0,0}, {0,0,0}, {104,209,240}, {104,209,240}, {104,209,240}, {0,0,0}, {139,230,229}, {0,0,0}, {94,255,255} },

    [2] = { {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {0,0,0}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {107,73,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {107,73,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {51,235,255}, {0,0,0}, {0,0,0}, {107,73,255}, {107,73,255}, {107,73,255}, {107,73,255}, {0,0,0}, {0,0,0}, {0,0,0}, {37,235,255}, {37,235,255}, {0,0,0}, {107,73,255}, {107,73,255}, {37,235,255}, {37,235,255}, {37,235,255}, {37,235,255}, {253,218,204}, {0,0,0}, {0,0,0}, {37,235,255}, {37,235,255}, {253,218,204}, {253,218,204}, {253,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {104,255,255}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204}, {172,1,204} },

    [4] = { {213,238,76}, {0,0,255}, {17,255,255}, {17,255,255}, {17,255,255}, {104,255,255}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {0,0,255}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {253,215,255}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76}, {213,238,76} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {17,102,255}, {17,102,255}, {17,102,255}, {17,102,255}, {0,0,0}, {0,0,0}, {17,255,255}, {17,255,255}, {17,255,255}, {104,255,255}, {0,0,0}, {0,0,0}, {17,102,255}, {17,102,255}, {17,102,255}, {17,102,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {213,245,255}, {213,245,255}, {0,0,0}, {0,0,234}, {0,0,0}, {213,245,255}, {213,245,255}, {213,245,255}, {0,0,0}, {0,0,234}, {213,245,255}, {213,245,255}, {213,245,255}, {213,245,255}, {0,0,0}, {0,0,0}, {0,0,0}, {107,73,255}, {107,73,255}, {107,73,255}, {107,73,255}, {0,0,0}, {0,0,0}, {0,0,0}, {37,235,255}, {37,235,255}, {0,0,0}, {37,235,255}, {37,235,255}, {37,235,255}, {37,235,255}, {37,235,255}, {37,235,255}, {253,218,204}, {0,0,0}, {0,0,0}, {37,235,255}, {37,235,255}, {253,218,204}, {253,218,204}, {253,218,204}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {213,245,255}, {213,245,255}, {0,0,0}, {0,0,0}, {0,0,0}, {213,245,255}, {213,245,255}, {213,245,255}, {0,0,0}, {0,0,0}, {213,245,255}, {213,245,255}, {213,245,255}, {213,245,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
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

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_6));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_7));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_8));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_9));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_0));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_1));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_4));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)) SS_DELAY(100) SS_TAP(X_5));
    }
    break;

    case TD(DANCE_5):
    case TD(DANCE_8):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
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

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }

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

static tap dance_state[26];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
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


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F9);
        tap_code16(KC_F9);
        tap_code16(KC_F9);
    }
    if(state->count > 3) {
        tap_code16(KC_F9);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_F9); break;
        case SINGLE_HOLD: register_code16(HU_1); break;
        case DOUBLE_TAP: register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F9); register_code16(KC_F9);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_F9); break;
        case SINGLE_HOLD: unregister_code16(HU_1); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F9); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(HU_2); break;
        case DOUBLE_TAP: register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(HU_2); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: register_code16(HU_3); break;
        case DOUBLE_TAP: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case SINGLE_HOLD: unregister_code16(HU_3); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F7);
        tap_code16(KC_F7);
        tap_code16(KC_F7);
    }
    if(state->count > 3) {
        tap_code16(KC_F7);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_F7); break;
        case SINGLE_HOLD: register_code16(HU_4); break;
        case DOUBLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F7); register_code16(KC_F7);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_F7); break;
        case SINGLE_HOLD: unregister_code16(HU_4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F7); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F8);
        tap_code16(KC_F8);
        tap_code16(KC_F8);
    }
    if(state->count > 3) {
        tap_code16(KC_F8);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_F8); break;
        case SINGLE_HOLD: register_code16(HU_5); break;
        case DOUBLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F8); register_code16(KC_F8);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_F8); break;
        case SINGLE_HOLD: unregister_code16(HU_5); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F8); break;
    }
    dance_state[4].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F2);
        tap_code16(KC_F2);
        tap_code16(KC_F2);
    }
    if(state->count > 3) {
        tap_code16(KC_F2);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_F2); break;
        case SINGLE_HOLD: register_code16(HU_7); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F2); register_code16(KC_F2);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_F2); break;
        case SINGLE_HOLD: unregister_code16(HU_7); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F2); break;
    }
    dance_state[5].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: register_code16(HU_8); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case SINGLE_HOLD: unregister_code16(HU_8); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[6].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_OE);
        tap_code16(HU_OE);
        tap_code16(HU_OE);
    }
    if(state->count > 3) {
        tap_code16(HU_OE);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(HU_OE); break;
        case DOUBLE_TAP: register_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_OE); register_code16(HU_OE);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(HU_OE); break;
        case DOUBLE_TAP: unregister_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_OE); break;
    }
    dance_state[7].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_UE);
        tap_code16(HU_UE);
        tap_code16(HU_UE);
    }
    if(state->count > 3) {
        tap_code16(HU_UE);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(HU_UE); break;
        case DOUBLE_TAP: register_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_UE); register_code16(HU_UE);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(HU_UE); break;
        case DOUBLE_TAP: unregister_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_UE); break;
    }
    dance_state[8].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
        tap_code16(KC_PSCR);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCR);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_PSCR); break;
        case DOUBLE_TAP: register_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCR); register_code16(KC_PSCR);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCR); break;
        case DOUBLE_TAP: unregister_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCR); break;
    }
    dance_state[9].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_UNDS);
        tap_code16(HU_UNDS);
        tap_code16(HU_UNDS);
    }
    if(state->count > 3) {
        tap_code16(HU_UNDS);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(HU_UNDS); break;
        case DOUBLE_TAP: register_code16(HU_BSLS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_UNDS); register_code16(HU_UNDS);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(HU_UNDS); break;
        case DOUBLE_TAP: unregister_code16(HU_BSLS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_UNDS); break;
    }
    dance_state[10].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_COLN);
        tap_code16(HU_COLN);
        tap_code16(HU_COLN);
    }
    if(state->count > 3) {
        tap_code16(HU_COLN);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(HU_COLN); break;
        case DOUBLE_TAP: register_code16(HU_PIPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_COLN); register_code16(HU_COLN);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(HU_COLN); break;
        case DOUBLE_TAP: unregister_code16(HU_PIPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_COLN); break;
    }
    dance_state[11].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_1);
        tap_code16(HU_1);
        tap_code16(HU_1);
    }
    if(state->count > 3) {
        tap_code16(HU_1);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(HU_1); break;
        case DOUBLE_TAP: register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_1); register_code16(HU_1);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(HU_1); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_1); break;
    }
    dance_state[12].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_2);
        tap_code16(HU_2);
        tap_code16(HU_2);
    }
    if(state->count > 3) {
        tap_code16(HU_2);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(HU_2); break;
        case DOUBLE_TAP: register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_2); register_code16(HU_2);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(HU_2); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_2); break;
    }
    dance_state[13].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_3);
        tap_code16(HU_3);
        tap_code16(HU_3);
    }
    if(state->count > 3) {
        tap_code16(HU_3);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(HU_3); break;
        case DOUBLE_TAP: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_3); register_code16(HU_3);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(HU_3); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_3); break;
    }
    dance_state[14].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_4);
        tap_code16(HU_4);
        tap_code16(HU_4);
    }
    if(state->count > 3) {
        tap_code16(HU_4);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(HU_4); break;
        case DOUBLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_4); register_code16(HU_4);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(HU_4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_4); break;
    }
    dance_state[15].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_5);
        tap_code16(HU_5);
        tap_code16(HU_5);
    }
    if(state->count > 3) {
        tap_code16(HU_5);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(HU_5); break;
        case DOUBLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_5); register_code16(HU_5);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(HU_5); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_5); break;
    }
    dance_state[16].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_6);
        tap_code16(HU_6);
        tap_code16(HU_6);
    }
    if(state->count > 3) {
        tap_code16(HU_6);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(HU_6); break;
        case DOUBLE_TAP: register_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_6); register_code16(HU_6);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(HU_6); break;
        case DOUBLE_TAP: unregister_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_6); break;
    }
    dance_state[17].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_7);
        tap_code16(HU_7);
        tap_code16(HU_7);
    }
    if(state->count > 3) {
        tap_code16(HU_7);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(HU_7); break;
        case DOUBLE_TAP: register_code16(KC_F7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_7); register_code16(HU_7);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(HU_7); break;
        case DOUBLE_TAP: unregister_code16(KC_F7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_7); break;
    }
    dance_state[18].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_8);
        tap_code16(HU_8);
        tap_code16(HU_8);
    }
    if(state->count > 3) {
        tap_code16(HU_8);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(HU_8); break;
        case DOUBLE_TAP: register_code16(KC_F8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_8); register_code16(HU_8);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(HU_8); break;
        case DOUBLE_TAP: unregister_code16(KC_F8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_8); break;
    }
    dance_state[19].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_9);
        tap_code16(HU_9);
        tap_code16(HU_9);
    }
    if(state->count > 3) {
        tap_code16(HU_9);
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(HU_9); break;
        case DOUBLE_TAP: register_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_9); register_code16(HU_9);
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(HU_9); break;
        case DOUBLE_TAP: unregister_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_9); break;
    }
    dance_state[20].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(HU_0);
        tap_code16(HU_0);
        tap_code16(HU_0);
    }
    if(state->count > 3) {
        tap_code16(HU_0);
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(HU_0); break;
        case DOUBLE_TAP: register_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(HU_0); register_code16(HU_0);
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(HU_0); break;
        case DOUBLE_TAP: unregister_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(HU_0); break;
    }
    dance_state[21].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F11);
        tap_code16(KC_F11);
        tap_code16(KC_F11);
    }
    if(state->count > 3) {
        tap_code16(KC_F11);
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_F11); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F11); register_code16(KC_F11);
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F11); break;
    }
    dance_state[22].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[23].step = 0;
}
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
    }
    dance_state[24].step = 0;
}
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
    }
    dance_state[25].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_5] = ACTION_TAP_DANCE_TAP_HOLD(KC_F1, HU_6),
        [DANCE_8] = ACTION_TAP_DANCE_TAP_HOLD(KC_F4, HU_9),
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
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
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_27_finished, dance_27_reset),
};

// Custom QMK

// Adding hungarian characters to continue caps word
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
        case HU_OO:
        case HU_OEE:
        case HU_EE:
        case HU_AA:
        case HU_II:
        case HU_OE:
        /* case HU_UE: same as KC_MINS */
        /* case HU_Z: same as KC_Y */
        /* case HU_Y: same as KC_Z */
        case HU_UU:
        case HU_UEE:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_9: /* Had to remove KC_0 as it is HU_OE and it needs shifting */
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        /* case HU_0: */
        /* case HU_1: */
        /* case HU_2: */
        /* case HU_3: */
        /* case HU_4: */
        /* case HU_5: */
        /* case HU_X: */
        /* case HU_6: */
        /* case HU_7: */
        /* case HU_8: */
        /* case HU_9: */
        case KC_LSFT: /* Since HU_UNDS sends S that would break capturing */
        case KC_RSFT:
        case KC_SLSH:
        case HU_UNDS: /* S(KC_SLSH) */
        /* case HU_BSLS: */
        /* case HU_COMM: */
        /* case HU_DOT: */
        /* case HU_COLN: */
        /* case HU_PIPE: */
        /* case HU_PLUS: */
        /* case HU_MINS: */
        /* case HU_ASTR: */
        /* case HU_SLSH: */
        /* case HU_AMPR: */
        /* case HU_SCLN: */
        /* case HU_LBRC: */
        /* case HU_RBRC: */
        /* case HU_AT: */
        /* case HU_TILD: */
        /* case HU_CIRC: */
        /* case HU_EXLM: */
        /* case HU_QUOT: */
        /* case HU_DLR: */
        /* case HU_HASH: */
        /* case HU_LPRN: */
        /* case HU_RPRN: */
        /* case HU_EQL: */
        /* case HU_LESS: */
        /* case HU_MORE: */
        /* case HU_LCBR: */
        /* case HU_RCBR: */
        /* case HU_DQOT: */
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
