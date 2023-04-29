/**
 * Definition: td9ea8458
 * Hash: d9ea8458
 */

#include "td9ea8458.h"

void td9ea8458::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
