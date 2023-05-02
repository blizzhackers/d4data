/**
 * Definition: t823d7a5c
 * Hash: 823d7a5c
 */

#include "t823d7a5c.h"

void t823d7a5c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
