/**
 * Definition: tb1bdda39
 * Hash: b1bdda39
 */

#include "tb1bdda39.h"

void tb1bdda39::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
