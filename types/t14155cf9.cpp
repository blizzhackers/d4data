/**
 * Definition: t14155cf9
 * Hash: 14155cf9
 */

#include "t14155cf9.h"

void t14155cf9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_283d1ad, base, ptr);
}
