/**
 * Definition: t7b31c691
 * Hash: 7b31c691
 */

#include "t7b31c691.h"

void t7b31c691::read(const char* base, char* &ptr) {
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
  readData(&unk_b23ce1f, base, current);
  ptr += 0x28;
}
