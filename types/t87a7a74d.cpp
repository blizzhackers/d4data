/**
 * Definition: t87a7a74d
 * Hash: 87a7a74d
 */

#include "t87a7a74d.h"

void t87a7a74d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
