/**
 * Definition: tc4e63b1f
 * Hash: c4e63b1f
 */

#include "tc4e63b1f.h"

void tc4e63b1f::read(const char* base, char* &ptr) {
  readData(&tName, base, ptr);
  readData(&gbidType, base, ptr);
  readData(&tMax, base, ptr);
  readData(&tHealth, base, ptr);
}
