/**
 * Definition: t8a6a0a47
 * Hash: 8a6a0a47
 */

#include "t8a6a0a47.h"

void t8a6a0a47::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
