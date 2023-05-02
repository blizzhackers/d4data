/**
 * Definition: t1f843277
 * Hash: 1f843277
 */

#include "t1f843277.h"

void t1f843277::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHardpointLink, base, current);
  current = ptr + 0x8;
  readData(&unk_2cbb1b0, base, current);
  current = ptr + 0xc;
  readData(&eTargetType, base, current);
  current = ptr + 0x10;
  readData(&unk_c33645f, base, current);
  ptr += 0x14;
}
