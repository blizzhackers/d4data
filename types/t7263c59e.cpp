/**
 * Definition: t7263c59e
 * Hash: 7263c59e
 */

#include "t7263c59e.h"

void t7263c59e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&nMinLevel, base, current);
  current = ptr + 0x1c;
  readData(&nMaxLevel, base, current);
  ptr += 0x20;
}
