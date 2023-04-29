/**
 * Definition: t8f9a3d64
 * Hash: 8f9a3d64
 */

#include "t8f9a3d64.h"

void t8f9a3d64::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_907c1bb, base, ptr);
}
