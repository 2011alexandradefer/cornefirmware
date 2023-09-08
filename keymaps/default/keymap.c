// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_MINS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
        KC_BSLS,GUI_T(KC_A),ALT_T(KC_S),CTL_T(KC_D),SFT_T(KC_F),KC_G,                    KC_H,RSFT_T(KC_J),RCTL_T(KC_K),RALT_T(KC_L),RGUI_T(KC_SCLN),KC_QUOT,
        KC_LBRC, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
                                            KC_ESC,  KC_GRV, MO(1),             KC_SPC,  KC_ENT,  KC_BSPC
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_LPAD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_F1,   GUI_T(KC_F2),ALT_T(KC_F3),CTL_T(KC_F4),SFT_T(KC_F5),   KC_F6,           KC_F7,RSFT_T(KC_F8),RCTL_T(KC_F9),RALT_T(KC_F10),RGUI_T(KC_F11),KC_F12,
        KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,                            KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN2,
                                            _______, _______, _______,          _______, KC_WH_D, KC_WH_U
    )
};
