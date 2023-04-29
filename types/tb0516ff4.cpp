/**
 * Definition: tb0516ff4
 * Hash: b0516ff4
 */

#include "tb0516ff4.h"

void tb0516ff4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
