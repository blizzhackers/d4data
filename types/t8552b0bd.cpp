/**
 * Definition: t8552b0bd
 * Hash: 8552b0bd
 */

#include "t8552b0bd.h"

void t8552b0bd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
