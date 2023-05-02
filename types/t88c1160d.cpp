/**
 * Definition: t88c1160d
 * Hash: 88c1160d
 */

#include "t88c1160d.h"

void t88c1160d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eIndices, base, current);
  ptr += 0x20;
}
