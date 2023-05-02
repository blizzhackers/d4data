/**
 * Definition: t6f18c43c
 * Hash: 6f18c43c
 */

#include "t6f18c43c.h"

void t6f18c43c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szBoneName, base, current);
  current = ptr + 0x40;
  readData(&flBlendWeight, base, current);
  current = ptr + 0x44;
  readData(&unk_3be99f4, base, current);
  ptr += 0x48;
}
