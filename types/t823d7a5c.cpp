/**
 * Definition: t823d7a5c
 * Hash: 823d7a5c
 */

#include "t823d7a5c.h"

void t823d7a5c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
