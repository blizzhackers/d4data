/**
 * Definition: t87a7a74d
 * Hash: 87a7a74d
 */

#include "t87a7a74d.h"

void t87a7a74d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
