/**
 * Definition: t5525c43b
 * Hash: 5525c43b
 */

#include "t5525c43b.h"

void t5525c43b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&unk_2fd1cdb, base, ptr);
  readData(&unk_dd52cf1, base, ptr);
  readData(&unk_87acb69, base, ptr);
  readData(&unk_87acb6a, base, ptr);
  readData(&unk_87acb6b, base, ptr);
  readData(&unk_9854b6a, base, ptr);
  readData(&flChance, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&unk_2a8c4b6, base, ptr);
  readData(&unk_335f70a, base, ptr);
  readData(&unk_c22ddc4, base, ptr);
  readData(&unk_6ead041, base, ptr);
  readData(&unk_c1d96ad, base, ptr);
  readData(&unk_a25251a, base, ptr);
}
