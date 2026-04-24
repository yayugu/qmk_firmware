#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

#define _______ KC_TRNS

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _QWERTY = 0,
  _FN,
  _GAME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
    // left hand
    KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,
    KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
    KC_LCTL,   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
                                            KC_LGUI,  KC_SPC, KC_LALT,
                                                      KC_ESC, MO(_FN),
            // right hand
                        KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,
                        KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,   KC_RBRC,
                        KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,   KC_BSLS,
                        KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_GRV,    KC_RSFT,
            KC_BSPC, KC_ENTER, KC_RGUI,
            MO(_FN), KC_RCTL),
    [_FN] = LAYOUT(
    // left hand
    _______,  KC_F1,     KC_F2,    KC_F3,    KC_F4,    KC_F5,
    _______,  _______,   KC_HOME,  KC_UP,    KC_END,   KC_PGUP,
    _______,  _______,   KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,
    _______,  _______,   _______,  _______,  _______,  _______,
                                            _______,  _______, _______,
                                                      _______,  _______,
            // right hand
                        KC_F6,   KC_F7,         KC_F8,         KC_F9,    KC_F10,  KC_F11,  KC_F12,
                        _______, SGUI(KC_LBRC), SGUI(KC_RBRC), _______,  _______, _______, _______, // LGUI + Shift + { / }
                        KC_LEFT, KC_DOWN,       KC_UP,         KC_RIGHT, _______, _______, _______,
                        _______, _______,       _______,       _______,  _______, _______, TG(_GAME),
            _______, _______, _______,
            _______, _______),
    [_GAME] = LAYOUT(
    // left hand
    _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,     KC_W,  _______,  _______,
    _______,  _______,     KC_A,     KC_S,     KC_D,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______, _______,
                                                      _______,  _______,
            // right hand
                        _______, _______, _______, _______,  _______,  _______,  _______,
                        _______, _______, _______, _______,  _______,  KC_UP  ,  _______,
                        _______, _______, _______, _______,  KC_LEFT,  KC_DOWN, KC_RIGHT,
                        _______, _______, _______, _______,  _______,  _______,  _______,
            _______, _______, _______,
            _______, _______),
};
