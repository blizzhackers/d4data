/**
 * Definition: te3f0b44
 * Hash: e3f0b44
 */

#include "te3f0b44.h"

void te3f0b44::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
