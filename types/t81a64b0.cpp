/**
 * Definition: t81a64b0
 * Hash: 81a64b0
 */

#include "t81a64b0.h"

void t81a64b0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tInstanceData, base, ptr);
}
