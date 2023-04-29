/**
 * Definition: ta5893491
 * Hash: a5893491
 */

#include "ta5893491.h"

void ta5893491::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eDamageType, base, ptr);
}
