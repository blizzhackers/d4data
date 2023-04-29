/**
 * Definition: ta1de3fa7
 * Hash: a1de3fa7
 */

#include "ta1de3fa7.h"

void ta1de3fa7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
