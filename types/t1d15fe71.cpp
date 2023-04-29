/**
 * Definition: t1d15fe71
 * Hash: 1d15fe71
 */

#include "t1d15fe71.h"

void t1d15fe71::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
