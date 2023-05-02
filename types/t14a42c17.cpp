/**
 * Definition: t14a42c17
 * Hash: 14a42c17
 */

#include "t14a42c17.h"

void t14a42c17::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6942446, base, current);
  current = ptr + 0x4;
  readData(&unk_11ed90c, base, current);
  current = ptr + 0x8;
  readData(&unk_b9b72f0, base, current);
  current = ptr + 0xc;
  readData(&unk_9cca79f, base, current);
  current = ptr + 0x10;
  readData(&unk_ae42774, base, current);
  current = ptr + 0x14;
  readData(&unk_5342bdc, base, current);
  current = ptr + 0x18;
  readData(&unk_f2e6be7, base, current);
  ptr += 0x1c;
}
