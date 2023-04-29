/**
 * Definition: t833be23b
 * Hash: 833be23b
 */

#include "t833be23b.h"

void t833be23b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&nItemCount, base, ptr);
  readData(&unk_f0998ad, base, ptr);
}
