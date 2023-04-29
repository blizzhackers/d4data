/**
 * Definition: t68f28573
 * Hash: 68f28573
 */

#include "t68f28573.h"

void t68f28573::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_e7b35bd, base, ptr);
  readData(&unk_c3afaa0, base, ptr);
  readData(&unk_b7d314f, base, ptr);
  readData(&unk_822b979, base, ptr);
  readData(&unk_c848c32, base, ptr);
  readData(&unk_1794af8, base, ptr);
  readData(&unk_978714f, base, ptr);
}
