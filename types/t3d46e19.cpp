/**
 * Definition: t3d46e19
 * Hash: 3d46e19
 */

#include "t3d46e19.h"

void t3d46e19::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_e7b35bd, base, ptr);
  readData(&unk_c3afaa0, base, ptr);
  readData(&unk_b7d314f, base, ptr);
  readData(&unk_4311d19, base, ptr);
  readData(&unk_59c4651, base, ptr);
}
