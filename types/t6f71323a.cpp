/**
 * Definition: t6f71323a
 * Hash: 6f71323a
 */

#include "t6f71323a.h"

void t6f71323a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_799ca4d, base, current);
  current = ptr + 0x14;
  readData(&snoOverridePower, base, current);
  ptr += 0x18;
}
