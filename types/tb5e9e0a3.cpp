/**
 * Definition: tb5e9e0a3
 * Hash: b5e9e0a3
 */

#include "tb5e9e0a3.h"

void tb5e9e0a3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&eFacing, base, current);
  current = ptr + 0x14;
  readData(&unk_701ed06, base, current);
  current = ptr + 0x18;
  readData(&pathRadius, base, current);
  ptr += 0x50;
}
