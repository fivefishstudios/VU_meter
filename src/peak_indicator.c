#include <stdint.h>
#include <avr/pgmspace.h>

const uint8_t PEAK_INDICATOR[23] PROGMEM = {
  0x15, /* = width */
  0x08, /* = height */
  0xff, 0x81, 0xdd, 0xdd, 0xc1, 0xff, 0x81, 0xad, 0xbd, 0xbd, 0xff, 0x81, 0xed, 0xed, 0x81, 0xff,
  0x81, 0xef, 0xef, 0x91, 0xff, };
