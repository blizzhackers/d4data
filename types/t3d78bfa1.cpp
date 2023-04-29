/**
 * Definition: t3d78bfa1
 * Hash: 3d78bfa1
 */

#include "t3d78bfa1.h"

void t3d78bfa1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_283d1ad, base, ptr);
  readData(&nValue, base, ptr);
}
