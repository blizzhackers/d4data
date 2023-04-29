/**
 * Definition: t679d7816
 * Hash: 679d7816
 */

#include "t679d7816.h"

void t679d7816::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
