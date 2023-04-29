/**
 * Definition: tb1f3d7f6
 * Hash: b1f3d7f6
 */

#include "tb1f3d7f6.h"

void tb1f3d7f6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nItemLabel, base, ptr);
}
