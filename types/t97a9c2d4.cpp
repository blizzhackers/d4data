/**
 * Definition: t97a9c2d4
 * Hash: 97a9c2d4
 */

#include "t97a9c2d4.h"

void t97a9c2d4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eRarity, base, current);
  current = ptr + 0x1c;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x20;
}
