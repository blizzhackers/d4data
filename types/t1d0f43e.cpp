/**
 * Definition: t1d0f43e
 * Hash: 1d0f43e
 */

#include "t1d0f43e.h"

void t1d0f43e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tGroup, base, current);
  current = ptr + 0x4;
  readData(&tValue, base, current);
  ptr += 0x8;
}
