/**
 * Definition: t8e0085
 * Hash: 8e0085
 */

#include "t8e0085.h"

void t8e0085::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eVBFormat, base, current);
  ptr += 0x4;
}
