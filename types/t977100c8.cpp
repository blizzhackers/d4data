/**
 * Definition: t977100c8
 * Hash: 977100c8
 */

#include "t977100c8.h"

void t977100c8::read(const char* base, char* &ptr) {
  readData(&tValueMin, base, ptr);
  readData(&tValueMax, base, ptr);
  readData(&tTime, base, ptr);
}
