/**
 * Definition: FogMask
 * Hash: 16ccfb88
 */

#include "FogMask.h"

void FogMask::read(const char* base, char* &ptr) {
  readData(&dwWidth, base, ptr);
  readData(&dwHeight, base, ptr);
  readData(&arMask, base, ptr);
}
