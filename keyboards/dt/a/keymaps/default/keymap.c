/* Copyright 2020 yushakobo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define _______ KC_TRNS

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  _QWERTY = 0,
  _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
    // left hand
    KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,
    KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
    KC_LCTL,   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
                        KC_TAB,  KC_BSLS,
                                KC_LGUI,  KC_SPC,
                                KC_ESC,   LCTL(KC_SPC), // Ctrl + Space
                                MO(_FN),  KC_LALT,
            // right hand
                        KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,
                        KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,   KC_RBRC,
                        KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,   KC_BSLS,
                        KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_GRV,    KC_RSFT,
                                        KC_BSPC, KC_ENTER,
            KC_ENTER,KC_RGUI,
            KC_BSPC, KC_RCTL,
            KC_RALT, MO(_FN)),
    [_FN] = LAYOUT(
    // left hand
    _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
    _______,  _______,  KC_HOME,  KC_UP,    KC_END,   KC_PGUP,
    _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,
    _______,  _______,  _______,  _______,  _______,  _______,
                        _______,  _______,
                                _______, _______,
                                _______, _______,
                                _______, _______,
            // right hand
                        KC_F6,    KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
                        _______, SGUI(KC_LBRC), SGUI(KC_RBRC), _______,  _______, _______, _______,  // LGUI + Shift + { / }
                        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______, _______,
                        _______, _______, _______, _______,  _______, _______, _______,
                                        _______, _______,
            _______, _______,
            _______, _______,
            _______, _______),
};
