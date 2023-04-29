/**
 * Definition: te3f5648a
 * Hash: e3f5648a
 */

#include "te3f5648a.h"

void te3f5648a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
