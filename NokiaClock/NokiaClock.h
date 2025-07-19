#pragma once
#include <Adafruit_GFX.h>
/* PROPERTIES

FONT_NAME NokiaClock
PIXEL_SIZE 6
*/
const uint8_t NokiaClockBitmaps[] PROGMEM = {
/* '0' 0x30 */ 0x76, 0xF7, 0xBD, 0xB8, 
/* '1' 0x31 */ 0x7D, 0xB6, 0xC0, 
/* '2' 0x32 */ 0xF0, 0xC6, 0xCC, 0x7C, 
/* '3' 0x33 */ 0xF0, 0xDC, 0x31, 0xF8, 
/* '4' 0x34 */ 0x19, 0xD7, 0xF1, 0x8C, 
/* '5' 0x35 */ 0xF6, 0x3C, 0x31, 0xF8, 
/* '6' 0x36 */ 0x76, 0x3D, 0xBD, 0xB8, 
/* '7' 0x37 */ 0xF8, 0xCC, 0x66, 0x30, 
/* '8' 0x38 */ 0x76, 0xDD, 0xBD, 0xB8, 
/* '9' 0x39 */ 0x76, 0xF7, 0xF1, 0xB8, 
/* ':' 0x3A */ 0xF3, 0xC0, 
};

const GFXglyph NokiaClockGlyphs[] PROGMEM = {
/* '0' 0x30 */ {     0,    5,   6,   6,   0,   -6 },
/* '1' 0x31 */ {     4,    3,   6,   4,   0,   -6 },
/* '2' 0x32 */ {     7,    5,   6,   6,   0,   -6 },
/* '3' 0x33 */ {    11,    5,   6,   6,   0,   -6 },
/* '4' 0x34 */ {    15,    5,   6,   6,   0,   -6 },
/* '5' 0x35 */ {    19,    5,   6,   6,   0,   -6 },
/* '6' 0x36 */ {    23,    5,   6,   6,   0,   -6 },
/* '7' 0x37 */ {    27,    5,   6,   6,   0,   -6 },
/* '8' 0x38 */ {    31,    5,   6,   6,   0,   -6 },
/* '9' 0x39 */ {    35,    5,   6,   6,   0,   -6 },
/* ':' 0x3A */ {    39,    2,   5,   4,   1,   -5 },
};

const GFXfont NokiaClock PROGMEM = {
(uint8_t*)NokiaClockBitmaps,
(GFXglyph*)NokiaClockGlyphs,
0x30, 0x3A, 6 
};
