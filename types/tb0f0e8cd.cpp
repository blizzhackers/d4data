/**
 * Definition: tb0f0e8cd
 * Hash: b0f0e8cd
 */

#include "tb0f0e8cd.h"

void tb0f0e8cd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
