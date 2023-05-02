/**
 * Definition: t2070413b
 * Hash: 2070413b
 */

#include "t2070413b.h"

void t2070413b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szMD5, base, current);
  ptr += 0x32;
}
