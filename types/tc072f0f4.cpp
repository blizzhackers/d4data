/**
 * Definition: tc072f0f4
 * Hash: c072f0f4
 */

#include "tc072f0f4.h"

void tc072f0f4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_370e8c2, base, current);
  current = ptr + 0x8;
  readData(&unk_d1de32b, base, current);
  current = ptr + 0x18;
  readData(&snoNPCComponentSet, base, current);
  current = ptr + 0x20;
  readData(&unk_a9187cf, base, current);
  current = ptr + 0x30;
  readData(&unk_4c7112f, base, current);
  current = ptr + 0x34;
  readData(&unk_1c56441, base, current);
  ptr += 0x38;
}
