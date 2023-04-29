/**
 * Definition: t8fccfaf2
 * Hash: 8fccfaf2
 */

#include "t8fccfaf2.h"

void t8fccfaf2::read(const char* base, char* &ptr) {
  readData(&tValueMin, base, ptr);
  readData(&tValueMax, base, ptr);
  readData(&tTime, base, ptr);
}
