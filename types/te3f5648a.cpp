/**
 * Definition: te3f5648a
 * Hash: e3f5648a
 */

#include "te3f5648a.h"

void te3f5648a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
