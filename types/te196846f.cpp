/**
 * Definition: te196846f
 * Hash: e196846f
 */

#include "te196846f.h"

void te196846f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
}
