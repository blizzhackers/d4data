/**
 * Definition: ta142f7f6
 * Hash: a142f7f6
 */

#include "ta142f7f6.h"

void ta142f7f6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
