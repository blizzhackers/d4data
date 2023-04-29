/**
 * Definition: t7de5a3b2
 * Hash: 7de5a3b2
 */

#include "t7de5a3b2.h"

void t7de5a3b2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flMinValue, base, ptr);
  readData(&flMaxValue, base, ptr);
}
