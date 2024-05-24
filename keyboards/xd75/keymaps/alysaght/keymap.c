/* Copyright 2021 Andrew Lysaght
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
#include "alysaght.h"

/* Inner 5 columns default layers
 *
 * ,----------------------------------.
 * |  NO  |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------+
 * |  NO  |   4  |   5  |   6  |  NO  |
 * |------+------+------+------+------+
 * |  NO  |   1  |   2  |   3  |   .  |
 * |------+------+------+------+------+
 * |  NO  |  NO  |  Up  |  NO  |  NO  |
 * |------+------+------+------+------+
 * |  NO  | Left | Down | Right|  NO  |
 * `----------------------------------'
 */
#define _________________MID_1_____________________         XXXXXXX,   KC_P7,   KC_P8,   KC_P9,   KC_P0
#define _________________MID_2_____________________         XXXXXXX,   KC_P4,   KC_P5,   KC_P6, XXXXXXX
#define _________________MID_3_____________________         XXXXXXX,   KC_P1,   KC_P2,   KC_P3, KC_PDOT
#define _________________MID_4_____________________         XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX
#define _________________MID_5_____________________         XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX


#define LAYOUT_ortho_5x15_wrapper(...) LAYOUT_ortho_5x15(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Colemak DH
[_COLEMAK] = LAYOUT_ortho_5x15_wrapper(
  _________________ALPHA_LN__________________,   _________________MID_1_____________________,   _________________ALPHA_RN__________________,
  _________________COLEMAK_L1________________,   _________________MID_2_____________________,   _________________COLEMAK_R1________________,
  _________________COLEMAK_L2________________,   _________________MID_3_____________________,   _________________COLEMAK_R2________________,
  _________________COLEMAK_L3________________,   _________________MID_4_____________________,   _________________COLEMAK_R3________________,
  _________________ALPHA_LT__________________,   _________________MID_5_____________________,   _________________ALPHA_RT__________________
),

[_QWERTY] = LAYOUT_ortho_5x15_wrapper(
  _________________ALPHA_LN__________________,   _________________MID_1_____________________,   _________________ALPHA_RN__________________,
  _________________QWERTY_L1_________________,   _________________MID_2_____________________,   _________________QWERTY_R1_________________,
  _________________QWERTY_L2_________________,   _________________MID_3_____________________,   _________________QWERTY_R2_________________,
  _________________QWERTY_L3_________________,   _________________MID_4_____________________,   _________________QWERTY_R3_________________,
  _________________ALPHA_LT__________________,   _________________MID_5_____________________,   _________________ALPHA_RT__________________
),
// Final Fantasy XIV
[_FFXIV] = LAYOUT_ortho_5x15_wrapper(
  _________________FFXIV_L0__________________, _________________MID_1_____________________,   _________________FFXIV_R0__________________,
  _________________FFXIV_L1__________________, _________________MID_2_____________________,   _________________FFXIV_R1__________________,
  _________________FFXIV_L2__________________, _________________MID_3_____________________,   _________________FFXIV_R2__________________,
  _________________FFXIV_L3__________________, _________________MID_4_____________________,   _________________FFXIV_R3__________________,
  _________________FFXIV_LT__________________, _________________MID_5_____________________,   _________________FFXIV_RT__________________
),

// Number and Symbol layer
[_NSL] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________, _________________BLANK_5___________________, _________________BLANK_5___________________,
  _________________NSL_L1____________________, _________________BLANK_5___________________, _________________NSL_R1____________________,
  _________________NSL_L2____________________, _________________BLANK_5___________________, _________________NSL_R2____________________,
  _________________NSL_L3____________________, _________________BLANK_5___________________, _________________NSL_R3____________________,
  _________________NSL_LT____________________, _________________BLANK_5___________________, _________________NSL_RT____________________
),

// SHIFTED Number and Symbol layer
[_NSSL] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________, _________________BLANK_5___________________, _________________BLANK_5___________________,
  _________________NSSL_L1___________________, _________________BLANK_5___________________, _________________NSSL_R1___________________,
  _________________NSSL_L2___________________, _________________BLANK_5___________________, _________________NSSL_R2___________________,
  _________________NSSL_L3___________________, _________________BLANK_5___________________, _________________NSSL_R3___________________,
  _________________NSSL_LT___________________, _________________BLANK_5___________________, _________________NSSL_RT___________________
),

// FUNCTION layer
[_FUNL] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________,   _________________BLANK_5___________________,   _________________BLANK_5___________________,
  _________________FUNC_L1___________________,   _________________BLANK_5___________________,   _________________FUNC_R1___________________,
  _________________FUNC_L2___________________,   _________________BLANK_5___________________,   _________________FUNC_R2___________________,
  _________________FUNC_L3___________________,   _________________BLANK_5___________________,   _________________FUNC_R3___________________,
  _________________FUNC_LT___________________,   _________________BLANK_5___________________,   _________________FUNC_RT___________________
),

// Navigation layer
[_NAVR] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________, _________________BLANK_5___________________, _________________BLANK_5___________________,
  _________________NAV_L1____________________, _________________BLANK_5___________________, _________________NAV_R1____________________,
  _________________NAV_L2____________________, _________________BLANK_5___________________, _________________NAV_R2____________________,
  _________________NAV_L3____________________, _________________BLANK_5___________________, _________________NAV_R3____________________,
  _________________NAV_LT____________________, _________________BLANK_5___________________, _________________NAV_RT____________________
),

// MOUSE layer
[_MOUSE] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________, _________________BLANK_5___________________, _________________BLANK_5___________________,
  _________________MOUSE_L1__________________, _________________BLANK_5___________________, _________________MOUSE_R1__________________,
  _________________MOUSE_L2__________________, _________________BLANK_5___________________, _________________MOUSE_R2__________________,
  _________________MOUSE_L3__________________, _________________BLANK_5___________________, _________________MOUSE_R3__________________,
  _________________MOUSE_LT__________________, _________________BLANK_5___________________, _________________MOUSE_RT__________________
),

// MEDIA layer
[_MEDIA] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________, _________________BLANK_5___________________, _________________BLANK_5___________________,
  _________________MEDIA_L1__________________, _________________BLANK_5___________________, _________________MEDIA_R1__________________,
  _________________MEDIA_L2__________________, _________________BLANK_5___________________, _________________MEDIA_R2__________________,
  _________________MEDIA_L3__________________, _________________BLANK_5___________________, _________________MEDIA_R3__________________,
  _________________MEDIA_LT__________________, _________________BLANK_5___________________, _________________MEDIA_RT__________________
),

// Adjust (_MOUSE + _MEDIA)
[_ADJUST] = LAYOUT_ortho_5x15_wrapper(
  _________________BLANK_5___________________,   _________________BLANK_5___________________,   _________________BLANK_5___________________,
  _________________DRAGO_L1__________________,   _________________BLANK_5___________________,   _________________DRAGO_R1__________________,
  _________________DRAGO_L2__________________,   _________________BLANK_5___________________,   FFXIV,   QWERTY,  XXXXXXX, COLEMAK, XXXXXXX,
  _________________DRAGO_L3__________________,   _________________BLANK_5___________________,   _________________DRAGO_R3__________________,
  _________________DRAGO_LT__________________,   _________________BLANK_5___________________,   _________________DRAGO_RT__________________
)
};
