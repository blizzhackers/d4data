/**
 * Definition: te5e3d6d6
 * Hash: e5e3d6d6
 */

#include "te5e3d6d6.h"

void te5e3d6d6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&x, base, current);
  current = ptr + 0x4;
  readData(&y, base, current);
  current = ptr + 0x8;
  readData(&z, base, current);
  current = ptr + 0xc;
  readData(&w, base, current);
  ptr += 0x10;
}
