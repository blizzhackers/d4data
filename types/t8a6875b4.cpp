/**
 * Definition: t8a6875b4
 * Hash: 8a6875b4
 */

#include "t8a6875b4.h"

void t8a6875b4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&fPlayerClass, base, current);
  ptr += 0x30;
}
