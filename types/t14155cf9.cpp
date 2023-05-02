/**
 * Definition: t14155cf9
 * Hash: 14155cf9
 */

#include "t14155cf9.h"

void t14155cf9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_283d1ad, base, current);
  ptr += 0x20;
}
