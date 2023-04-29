/**
 * Definition: ta712a76f
 * Hash: a712a76f
 */

#include "ta712a76f.h"

void ta712a76f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
