/**
 * Definition: tbb29c0
 * Hash: bb29c0
 */

#include "tbb29c0.h"

void tbb29c0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
