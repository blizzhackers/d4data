/**
 * Definition: t835b496b
 * Hash: 835b496b
 */

#include "t835b496b.h"

void t835b496b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
