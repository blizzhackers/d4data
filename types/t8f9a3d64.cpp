/**
 * Definition: t8f9a3d64
 * Hash: 8f9a3d64
 */

#include "t8f9a3d64.h"

void t8f9a3d64::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_907c1bb, base, current);
  ptr += 0x28;
}
