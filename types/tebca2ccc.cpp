/**
 * Definition: tebca2ccc
 * Hash: ebca2ccc
 */

#include "tebca2ccc.h"

void tebca2ccc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
}
