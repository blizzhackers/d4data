/**
 * Definition: t8a3936b2
 * Hash: 8a3936b2
 */

#include "t8a3936b2.h"

void t8a3936b2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
