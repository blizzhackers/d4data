/**
 * Definition: t7b31c691
 * Hash: 7b31c691
 */

#include "t7b31c691.h"

void t7b31c691::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_b23ce1f, base, ptr);
}
