/**
 * Definition: t63010143
 * Hash: 63010143
 */

#include "t63010143.h"

void t63010143::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValueMin, base, current);
  current = ptr + 0xc;
  readData(&tValueMax, base, current);
  current = ptr + 0x18;
  readData(&tTime, base, current);
  ptr += 0x1c;
}
