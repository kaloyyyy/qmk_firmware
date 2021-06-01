/*
Copyright 2021 Kaloy

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER Kaloy
#define PRODUCT sheeftee50

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode
 */
#define MATRIX_ROW_PINS { B7, D5, E6, F5, NO_PIN }
#define MATRIX_COL_PINS { F0, D3, D2, D1, D0, F7, F6, D4, D6, D7, B4, B5, B6, C6, C7 }
#define UNUSED_PINS



/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW





#define RGB_DI_PIN B3
#ifdef RGB_DI_PIN
#define RGBLED_NUM 14
#define RGBLIGHT_ANIMATIONS

#endif

/* Encoders */
#define ENCODERS 4
#define ENCODERS_PAD_A { B0, B0, B0, B0 }
#define ENCODERS_PAD_B { B2, B1, F1, F4 }

#define ENCODERS_CW_KEY  { { 1, 4 },{ 3, 4 },{ 5, 4 } ,{ 7, 4 } }
#define ENCODERS_CCW_KEY { { 0, 4 },{ 2, 4 },{ 4, 4 } ,{ 6, 4 } }


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
