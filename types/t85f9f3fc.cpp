/**
 * Definition: t85f9f3fc
 * Hash: 85f9f3fc
 */

#include "t85f9f3fc.h"

void t85f9f3fc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
