/**
 * Definition: t5d010d3f
 * Hash: 5d010d3f
 */

#include "t5d010d3f.h"

void t5d010d3f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
