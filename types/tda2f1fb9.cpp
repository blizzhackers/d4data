/**
 * Definition: tda2f1fb9
 * Hash: da2f1fb9
 */

#include "tda2f1fb9.h"

void tda2f1fb9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eType, base, ptr);
  readData(&unk_d447cfd, base, ptr);
}
