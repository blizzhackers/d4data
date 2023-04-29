/**
 * Definition: t63010144
 * Hash: 63010144
 */

#include "t63010144.h"

void t63010144::read(const char* base, char* &ptr) {
  readData(&tValueMin, base, ptr);
  readData(&tValueMax, base, ptr);
  readData(&tTime, base, ptr);
}
