/**
 * Definition: t8c5e391c
 * Hash: 8c5e391c
 */

#include "t8c5e391c.h"

void t8c5e391c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPair, base, ptr);
}
