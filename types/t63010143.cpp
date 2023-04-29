/**
 * Definition: t63010143
 * Hash: 63010143
 */

#include "t63010143.h"

void t63010143::read(const char* base, char* &ptr) {
  readData(&tValueMin, base, ptr);
  readData(&tValueMax, base, ptr);
  readData(&tTime, base, ptr);
}
