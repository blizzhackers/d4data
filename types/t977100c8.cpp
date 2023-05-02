/**
 * Definition: t977100c8
 * Hash: 977100c8
 */

#include "t977100c8.h"

void t977100c8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValueMin, base, current);
  current = ptr + 0x4;
  readData(&tValueMax, base, current);
  current = ptr + 0x8;
  readData(&tTime, base, current);
  ptr += 0xc;
}
