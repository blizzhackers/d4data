/**
 * Definition: t5e9beb0e
 * Hash: 5e9beb0e
 */

#include "t5e9beb0e.h"

void t5e9beb0e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
