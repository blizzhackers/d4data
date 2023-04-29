/**
 * Definition: t28dc8b5b
 * Hash: 28dc8b5b
 */

#include "t28dc8b5b.h"

void t28dc8b5b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
