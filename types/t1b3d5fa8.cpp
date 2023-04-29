/**
 * Definition: t1b3d5fa8
 * Hash: 1b3d5fa8
 */

#include "t1b3d5fa8.h"

void t1b3d5fa8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_283d1ad, base, ptr);
  readData(&szValue, base, ptr);
}
