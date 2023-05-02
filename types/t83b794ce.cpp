/**
 * Definition: t83b794ce
 * Hash: 83b794ce
 */

#include "t83b794ce.h"

void t83b794ce::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
