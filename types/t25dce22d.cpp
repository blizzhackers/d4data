/**
 * Definition: t25dce22d
 * Hash: 25dce22d
 */

#include "t25dce22d.h"

void t25dce22d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nTier, base, ptr);
}
