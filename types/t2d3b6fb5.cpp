/**
 * Definition: t2d3b6fb5
 * Hash: 2d3b6fb5
 */

#include "t2d3b6fb5.h"

void t2d3b6fb5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
