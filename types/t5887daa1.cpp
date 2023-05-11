/**
 * Definition: t5887daa1
 * Hash: 5887daa1
 */

#include "t5887daa1.h"

void t5887daa1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_52f2d9, base, current);
  current = ptr + 0x8;
  readData(&unk_bb31b91, base, current);
  current = ptr + 0x18;
  readData(&unk_a1d8ccf, base, current);
  ptr += 0x28;
}
