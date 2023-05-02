/**
 * Definition: t2900af1b
 * Hash: 2900af1b
 */

#include "t2900af1b.h"

void t2900af1b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8746b6c, base, current);
  current = ptr + 0x4;
  readData(&unk_69b0e21, base, current);
  current = ptr + 0x8;
  readData(&unk_3d9b929, base, current);
  ptr += 0xc;
}
