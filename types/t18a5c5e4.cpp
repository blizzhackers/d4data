/**
 * Definition: t18a5c5e4
 * Hash: 18a5c5e4
 */

#include "t18a5c5e4.h"

void t18a5c5e4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_f86aafe, base, current);
  current = ptr + 0x14;
  readData(&eBehavior, base, current);
  current = ptr + 0x18;
  readData(&unk_d014f8b, base, current);
  current = ptr + 0x1c;
  readData(&unk_81c0263, base, current);
  current = ptr + 0x20;
  readData(&nFadeGroup, base, current);
  ptr += 0x28;
}
