/**
 * Definition: t3f2da5e2
 * Hash: 3f2da5e2
 */

#include "t3f2da5e2.h"

void t3f2da5e2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_cd39b27, base, current);
  current = ptr + 0x4;
  readData(&unk_a6c6afd, base, current);
  current = ptr + 0x8;
  readData(&nHeightValue, base, current);
  current = ptr + 0xa;
  readData(&dwFlags, base, current);
  current = ptr + 0xb;
  readData(&unk_d188924, base, current);
  ptr += 0xc;
}
