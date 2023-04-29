/* Copyright 2023 kuzumotch
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
// enum layer_names {
//     _BASE,
//     _FN
// };



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐───┐───┐
     * │   │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├─a──┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤───┤───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │ M │ N │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘───┘───┘
     */
    /* Base */
    [0] = LAYOUT(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_F13,    KC_F14,
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_F13,    KC_F14,
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_F13,    KC_F14,
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,    KC_F13,    KC_F14,
        KC_F1,              KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,                                    KC_F12,    KC_F13,    KC_F14
    ),
    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______,                            _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______,                            _______, _______, _______
    )
};
