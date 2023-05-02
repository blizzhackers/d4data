/**
 * Definition: t2d3b6fb5
 * Hash: 2d3b6fb5
 */

#include "t2d3b6fb5.h"

void t2d3b6fb5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
