/**
 * Definition: t5c9de2d4
 * Hash: 5c9de2d4
 */

#include "t5c9de2d4.h"

void t5c9de2d4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4a28fe, base, current);
  current = ptr + 0x4;
  readData(&nUnlockLevel, base, current);
  current = ptr + 0x8;
  readData(&unk_4059358, base, current);
  ptr += 0x350;
}
