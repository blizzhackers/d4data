/**
 * Definition: t8c5e391c
 * Hash: 8c5e391c
 */

#include "t8c5e391c.h"

void t8c5e391c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tPair, base, current);
  ptr += 0x20;
}
