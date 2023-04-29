/**
 * Definition: t8a6875b4
 * Hash: 8a6875b4
 */

#include "t8a6875b4.h"

void t8a6875b4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&fPlayerClass, base, ptr);
}
