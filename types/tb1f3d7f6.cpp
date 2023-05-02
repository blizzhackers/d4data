/**
 * Definition: tb1f3d7f6
 * Hash: b1f3d7f6
 */

#include "tb1f3d7f6.h"

void tb1f3d7f6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&nItemLabel, base, current);
  ptr += 0x20;
}
