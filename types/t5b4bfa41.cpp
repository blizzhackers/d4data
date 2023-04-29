/**
 * Definition: t5b4bfa41
 * Hash: 5b4bfa41
 */

#include "t5b4bfa41.h"

void t5b4bfa41::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
