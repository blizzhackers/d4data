/**
 * Definition: t69d82e6d
 * Hash: 69d82e6d
 */

#include "t69d82e6d.h"

void t69d82e6d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&nMinimum, base, ptr);
}
