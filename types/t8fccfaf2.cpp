/**
 * Definition: t8fccfaf2
 * Hash: 8fccfaf2
 */

#include "t8fccfaf2.h"

void t8fccfaf2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValueMin, base, current);
  current = ptr + 0x4;
  readData(&tValueMax, base, current);
  current = ptr + 0x8;
  readData(&tTime, base, current);
  ptr += 0xc;
}
