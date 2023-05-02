/**
 * Definition: t8eb5d0a6
 * Hash: 8eb5d0a6
 */

#include "t8eb5d0a6.h"

void t8eb5d0a6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&snoContext, base, current);
  current = ptr + 0x14;
  readData(&unk_a3e2a60, base, current);
  current = ptr + 0x18;
  readData(&unk_d415903, base, current);
  ptr += 0x20;
}
