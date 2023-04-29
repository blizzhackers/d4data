/**
 * Definition: te7d3297d
 * Hash: e7d3297d
 */

#include "te7d3297d.h"

void te7d3297d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
