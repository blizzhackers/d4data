/**
 * Definition: t2d18fb5c
 * Hash: 2d18fb5c
 */

#include "t2d18fb5c.h"

void t2d18fb5c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_50f7690, base, current);
  current = ptr + 0x4;
  readData(&unk_29377d2, base, current);
  current = ptr + 0x8;
  readData(&unk_cd68eaf, base, current);
  current = ptr + 0xc;
  readData(&unk_3696325, base, current);
  ptr += 0x10;
}
