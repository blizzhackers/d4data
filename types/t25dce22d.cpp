/**
 * Definition: t25dce22d
 * Hash: 25dce22d
 */

#include "t25dce22d.h"

void t25dce22d::read(const char* base, char* &ptr) {
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
  readData(&nTier, base, current);
  ptr += 0x28;
}
