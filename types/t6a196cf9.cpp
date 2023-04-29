/**
 * Definition: t6a196cf9
 * Hash: 6a196cf9
 */

#include "t6a196cf9.h"

void t6a196cf9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
