/**
 * Definition: tf472ad7e
 * Hash: f472ad7e
 */

#include "tf472ad7e.h"

void tf472ad7e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
