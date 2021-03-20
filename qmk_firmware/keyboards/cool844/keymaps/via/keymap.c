/* Copyright 2021 m.ki
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _LOWER,
    _UPPER
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    /* +-----------------------------------------------------------------------+
    * | esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  | BS  |
    * |-----------------------------------------------------------------------|
    * | ctrl|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  -  |enter|
    * |-----------------------------------------------------------------------|
    * |shift|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  | up  |shift|
    * |-----------------------------------------------------------------------|
    * | alt | gui |           |space|     |enter|space|     | left| down|right|
    * +-----------+           +-----+     +-----------+     +-----------------+
    */
    
    [_BASE] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,\
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_MINUS, KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    LT(_UPPER,KC_V),LT(_LOWER,KC_B),LT(_FN,KC_N),KC_M,    KC_COMM, KC_DOT,  KC_UP,    KC_RSFT, \
        KC_LALT, KC_LGUI,                   LT(_FN,KC_SPACE),LT(_LOWER,KC_ENTER),LSFT_T(KC_SPACE),  KC_LEFT,KC_DOWN,KC_RIGHT \
    ),
   /* FN */
    /* +-----------------------------------------------------------------------+
    * | esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | BS  |
    * |-----------------------------------------------------------------------|
    * | ctrl|  !  |  @  |  #  |  $  |  %  |  +  |  -  |  *  |  /  |  =  |enter|
    * |-----------------------------------------------------------------------|
    * |shift|  no |  no |  no |  no |  no  |  no  |  no | [ |  ]  | up  |shift|
    * |-----------------------------------------------------------------------|
    * | alt | gui |           |space|     |enter|space|     | left| down|right|
    * +-----------+           +-----+     +-----------+     +-----------------+
    */  
    [_FN] = LAYOUT(
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_BSPC,\
        KC_LCTL, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_PLUS, KC_MINUS, KC_ASTR, KC_SLSH, KC_EQL,  KC_ENT, \
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LBRC, KC_RBRC,  KC_UP,    KC_RSFT, \
        KC_LALT, KC_LGUI,                   KC_SPACE,KC_ENTER,LSFT(KC_SPACE),  KC_LEFT,KC_DOWN,KC_RIGHT \
    ),
    /* LOWER */
    /* +-----------------------------------------------------------------------+
    * | esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | BS  |
    * |-----------------------------------------------------------------------|
    * | ctrl|  [  |  ]  |  \  |  ;  |  :  | left| down|  up |right|  ?  |enter|
    * |-----------------------------------------------------------------------|
    * |shift|  -  |  |  |  ^  |  ~  | no  |  no |  no |  no |  no | up  |shift|
    * |-----------------------------------------------------------------------|
    * | alt | gui |           |space|     | no  |space|     | left| down|right|
    * +-----------+           +-----+     +-----------+     +-----------------+
    */  
    [_LOWER] = LAYOUT(
        KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,     KC_BSPC,\
        KC_LCTL, KC_LBRC, KC_RBRC, KC_BSLS, KC_SCLN, KC_COLN, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_QUES,    KC_ENT, \
        KC_LSFT, KC_MINS, KC_PIPE, KC_CIRC, KC_TILD, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_UP,    KC_RSFT, \
        KC_LALT, KC_LGUI,                   KC_SPACE,KC_ENTER,KC_SPACE,  KC_LEFT,KC_DOWN,KC_RIGHT \
    ),
    /* UPPER */
    /* +----------------------------------------------------------------------------------------+
    * | esc |  !     |  @     |  #    |   $   |  %    |  ^    |  &    |  *    |  (  |  )  | BS  |
    * |-----------------------------------------------------------------------------------------|
    * | ctrl|RGB TOG |RGB MOD |RGB HUI|RGB HUD|RGB SAI|RGB SAD|RGB VAI|RGB VAD|  no |  no |enter|
    * |-----------------------------------------------------------------------------------------|
    * |shift|  no    |  no    |  no   |  no   |  no   |  no   |  no   |  no   |  no | up  |shift|
    * |-----------------------------------------------------------------------------------------|
    * | alt | gui    |                |space  |       |reset  |space  |       | left| down|right|
    * +--------------+                +-------+       +---------------+       +-----------------+
    */  
    [_UPPER] = LAYOUT(
        KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_BSPC,\
        KC_LCTL, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO,    KC_ENT, \
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_UP,    KC_RSFT, \
        KC_LALT, KC_LGUI,                   KC_SPACE,RESET,KC_SPACE,                     KC_LEFT, KC_DOWN,  KC_RIGHT \
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
