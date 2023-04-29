/**
 * Definition: t3071f19a
 * Hash: 3071f19a
 */

#include "t3071f19a.h"

void t3071f19a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
