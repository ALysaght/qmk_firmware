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

#include "alysaght.h"


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case FFXIV:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_FFXIV);
          }
          return false;
          break;
        case COLEMAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK);
          }
          return false;
          break;
        case R_ASIGN:
          if (record->event.pressed) {
            // when keycode R_ASIGN is pressed
            SEND_STRING("<- ");
          }
          // return false;
          break;
        case R_PIPE:
          if (record->event.pressed) {
            SEND_STRING(" %>%\n");
          }
          break;
        case GITFETC:
          if (record->event.pressed) {
            SEND_STRING("git fetch ");
          }
          break;
        case GITPULL:
          if (record->event.pressed) {
            SEND_STRING("git pull ");
          }
          break;
        case GITPUSI:
          if (record->event.pressed) {
            SEND_STRING("git push imm ");
          }
          break;
        case GITPUSO:
          if (record->event.pressed) {
            SEND_STRING("git push origin ");
          }
          break;
        case GITREBA:
          if (record->event.pressed) {
            SEND_STRING("git pull --rebase ");
          }
          break;
        case GITADD:
          if (record->event.pressed) {
            SEND_STRING("git add ");
          }
          break;
        case GITCOMM:
          if (record->event.pressed) {
            SEND_STRING("git commit -m ");
          }
          break;
        case GITBRCH:
          if (record->event.pressed) {
            SEND_STRING("git branch ");
          }
          break;
        case GITCOUT:
          if (record->event.pressed) {
            SEND_STRING("git checkout ");
          }
          break;
        case GITCOBR:
          if (record->event.pressed) {
            SEND_STRING("git checkout -b ");
          }
          break;
        case GITSTAT:
          if (record->event.pressed) {
            SEND_STRING("git status ");
          }
          break;
        case GITBDEL:
          if (record->event.pressed) {
            SEND_STRING("git branch -d ");
          }
          break;
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef __AVR__
            writePinLow(E6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            writePinHigh(E6);
            #endif
          }
          return false;
          break;
      }
    return true;
};
