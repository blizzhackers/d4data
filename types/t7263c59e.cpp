/**
 * Definition: t7263c59e
 * Hash: 7263c59e
 */

#include "t7263c59e.h"

void t7263c59e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nMinLevel, base, ptr);
  readData(&nMaxLevel, base, ptr);
}
