/**
 * Definition: tb6e5e27e
 * Hash: b6e5e27e
 */

#include "tb6e5e27e.h"

void tb6e5e27e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
