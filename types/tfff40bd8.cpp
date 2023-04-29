/**
 * Definition: tfff40bd8
 * Hash: fff40bd8
 */

#include "tfff40bd8.h"

void tfff40bd8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
