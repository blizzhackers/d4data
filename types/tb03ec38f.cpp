/**
 * Definition: tb03ec38f
 * Hash: b03ec38f
 */

#include "tb03ec38f.h"

void tb03ec38f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
