/**
 * Definition: t899530f1
 * Hash: 899530f1
 */

#include "t899530f1.h"

void t899530f1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eFilterInequality, base, ptr);
  readData(&flTime, base, ptr);
}
