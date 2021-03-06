/* Copyright 2021 Kaloy
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

#pragma once

#include "quantum.h"
#include "encoder_action.h"


/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_all( \
       E00A, E00B, K00,   K01,    K02,     K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E, \
       E01A, E01B, K10,   K11,             K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E, \
       E02A, E02B, K20,           K22,     K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E, \
       E03A, E03B, K30,   K31,             K33,   K34,   K35,   K36,                        K3A,   K3B,   K3C,   K3D,   K3E  \
) { \
    { K00,   K01,    K02,     K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E   }, \
    { K10,   K11,    KC_NO,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E   }, \
    { K20,   KC_NO,  K22,     K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E   }, \
    { K30,   K31,    KC_NO,   K33,   K34,   K35,   K36,   KC_NO, KC_NO, KC_NO, KC_NO, K3B,   K3C,   K3D,   K3E   }, \
    { E00A,  E00B,   E01A,    E01B,  E02A,  E02B,  E03A,  E03B,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
     \
}

