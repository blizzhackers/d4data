/**
 * Definition: t4613b91c
 * Hash: 4613b91c
 */

#include "t4613b91c.h"

void t4613b91c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
