/**
 * Definition: t2b27b554
 * Hash: 2b27b554
 */

#include "t2b27b554.h"

void t2b27b554::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwUnlockLevel, base, current);
  current = ptr + 0x4;
  readData(&unk_8b0c045, base, current);
  current = ptr + 0x8;
  readData(&unk_b7d2154, base, current);
  current = ptr + 0x10;
  readData(&unk_8bd010, base, current);
  ptr += 0x20;
}
