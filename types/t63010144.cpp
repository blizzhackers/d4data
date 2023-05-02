/**
 * Definition: t63010144
 * Hash: 63010144
 */

#include "t63010144.h"

void t63010144::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValueMin, base, current);
  current = ptr + 0x10;
  readData(&tValueMax, base, current);
  current = ptr + 0x20;
  readData(&tTime, base, current);
  ptr += 0x24;
}
