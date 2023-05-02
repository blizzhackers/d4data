/**
 * Definition: t331e33e0
 * Hash: 331e33e0
 */

#include "t331e33e0.h"

void t331e33e0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&bEquipped, base, current);
  current = ptr + 0x14;
  readData(&bBackpack, base, current);
  current = ptr + 0x18;
  readData(&bStash, base, current);
  ptr += 0x1c;
}
