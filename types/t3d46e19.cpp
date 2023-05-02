/**
 * Definition: t3d46e19
 * Hash: 3d46e19
 */

#include "t3d46e19.h"

void t3d46e19::read(const char* base, char* &ptr) {
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
  readData(&unk_4311d19, base, current);
  current = ptr + 0x2c;
  readData(&unk_59c4651, base, current);
  ptr += 0x38;
}
