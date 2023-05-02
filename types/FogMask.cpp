/**
 * Definition: FogMask
 * Hash: 16ccfb88
 */

#include "FogMask.h"

void FogMask::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwWidth, base, current);
  current = ptr + 0x4;
  readData(&dwHeight, base, current);
  current = ptr + 0x8;
  readData(&arMask, base, current);
  ptr += 0x18;
}
