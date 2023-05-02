/**
 * Definition: tc0fa945c
 * Hash: c0fa945c
 */

#include "tc0fa945c.h"

void tc0fa945c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  ptr += 0x18;
}
