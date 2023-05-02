/**
 * Definition: t6808914a
 * Hash: 6808914a
 */

#include "t6808914a.h"

void t6808914a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ec6554, base, current);
  current = ptr + 0x4;
  readData(&unk_6d4e26a, base, current);
  current = ptr + 0x8;
  readData(&unk_590df7d, base, current);
  current = ptr + 0xc;
  readData(&unk_b896e67, base, current);
  current = ptr + 0x10;
  readData(&unk_597ad5d, base, current);
  current = ptr + 0x14;
  readData(&unk_3c03ad2, base, current);
  current = ptr + 0x18;
  readData(&unk_8649f82, base, current);
  current = ptr + 0x1c;
  readData(&unk_d89162c, base, current);
  current = ptr + 0x20;
  readData(&unk_32d45f9, base, current);
  current = ptr + 0x24;
  readData(&unk_4c5591b, base, current);
  ptr += 0x28;
}
