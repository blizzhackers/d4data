/**
 * Definition: t73b68c10
 * Hash: 73b68c10
 */

#include "t73b68c10.h"

void t73b68c10::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
