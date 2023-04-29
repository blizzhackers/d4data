/**
 * Definition: te768a7d7
 * Hash: e768a7d7
 */

#include "te768a7d7.h"

void te768a7d7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
