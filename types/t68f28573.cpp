/**
 * Definition: t68f28573
 * Hash: 68f28573
 */

#include "t68f28573.h"

void t68f28573::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_e7b35bd, base, current);
  current = ptr + 0x14;
  readData(&unk_c3afaa0, base, current);
  current = ptr + 0x18;
  readData(&unk_b7d314f, base, current);
  current = ptr + 0x28;
  readData(&unk_822b979, base, current);
  current = ptr + 0x2c;
  readData(&unk_c848c32, base, current);
  current = ptr + 0x30;
  readData(&unk_1794af8, base, current);
  current = ptr + 0x34;
  readData(&unk_978714f, base, current);
  ptr += 0x38;
}
