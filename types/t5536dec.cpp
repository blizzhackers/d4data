/**
 * Definition: t5536dec
 * Hash: 5536dec
 */

#include "t5536dec.h"

void t5536dec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e7b35bd, base, current);
  current = ptr + 0x8;
  readData(&unk_8c5a4bb, base, current);
  current = ptr + 0x18;
  readData(&unk_822b979, base, current);
  current = ptr + 0x1c;
  readData(&unk_c848c32, base, current);
  current = ptr + 0x20;
  readData(&unk_1794af8, base, current);
  current = ptr + 0x24;
  readData(&unk_978714f, base, current);
  ptr += 0x28;
}
