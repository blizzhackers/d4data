/**
 * Definition: t74041a3f
 * Hash: 74041a3f
 */

#include "t74041a3f.h"

void t74041a3f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arConditions, base, ptr);
}
