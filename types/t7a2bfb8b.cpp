/**
 * Definition: t7a2bfb8b
 * Hash: 7a2bfb8b
 */

#include "t7a2bfb8b.h"

void t7a2bfb8b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eMonsterRarity, base, ptr);
}
