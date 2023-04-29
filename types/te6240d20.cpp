/**
 * Definition: te6240d20
 * Hash: e6240d20
 */

#include "te6240d20.h"

void te6240d20::read(const char* base, char* &ptr) {
  readData(&tName, base, ptr);
  readData(&tRadius, base, ptr);
  readData(&bInvert, base, ptr);
}
