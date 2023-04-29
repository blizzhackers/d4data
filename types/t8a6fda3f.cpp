/**
 * Definition: t8a6fda3f
 * Hash: 8a6fda3f
 */

#include "t8a6fda3f.h"

void t8a6fda3f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
