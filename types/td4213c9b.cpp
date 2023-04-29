/**
 * Definition: td4213c9b
 * Hash: d4213c9b
 */

#include "td4213c9b.h"

void td4213c9b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
