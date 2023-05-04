/**
 * Definition: t9e8134dc
 * Hash: 9e8134dc
 */

#include "t9e8134dc.h"

void t9e8134dc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szBoneName, base, current);
  current = ptr + 0x8;
  readData(&ptOffsetList, base, current);
  ptr += 0x18;
}
