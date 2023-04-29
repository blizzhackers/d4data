/**
 * Definition: t16e3cafe
 * Hash: 16e3cafe
 */

#include "t16e3cafe.h"

void t16e3cafe::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
