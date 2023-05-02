/**
 * Definition: t9e555889
 * Hash: 9e555889
 */

#include "t9e555889.h"

void t9e555889::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_770f3b7, base, current);
  current = ptr + 0x4;
  readData(&unk_b1f8d85, base, current);
  current = ptr + 0x8;
  readData(&nDamageState, base, current);
  ptr += 0xc;
}
