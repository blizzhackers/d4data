/**
 * Definition: t6a196cf9
 * Hash: 6a196cf9
 */

#include "t6a196cf9.h"

void t6a196cf9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoLevelArea, base, current);
  ptr += 0x20;
}
