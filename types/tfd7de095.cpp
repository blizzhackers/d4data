/**
 * Definition: tfd7de095
 * Hash: fd7de095
 */

#include "tfd7de095.h"

void tfd7de095::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nPotionCount, base, ptr);
}
