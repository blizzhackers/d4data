/**
 * Definition: t2ffe9f61
 * Hash: 2ffe9f61
 */

#include "t2ffe9f61.h"

void t2ffe9f61::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tBoneName, base, current);
  current = ptr + 0x4;
  readData(&unk_3b3ca83, base, current);
  current = ptr + 0x8;
  readData(&unk_2e1e27, base, current);
  ptr += 0xc;
}
