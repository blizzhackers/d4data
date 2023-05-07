/**
 * Definition: GlobalBase
 * Hash: 15d1144c
 */

#include "GlobalBase.h"

void GlobalBase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
