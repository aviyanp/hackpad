// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┬───┬───┐
     *     │ 7 │ 8 │ 9 │
     *     ├───┼───┼───┤
     *     │ 4 │ 5 │ 6 │
     *     ├───┼───┼───┤
     *     │ 1 │ 2 │ 3 │
     * ┌───┼───┴───┼───┤
     * │ctl│   0   │Num│
     * └───┴───────┴───┘
     */
    [0] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,   
        KC_P4,   KC_P5,   KC_P6,   
        KC_P1,   KC_P2,   KC_P3,   
        KC_P0,   KC_P0, KC_ENT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif