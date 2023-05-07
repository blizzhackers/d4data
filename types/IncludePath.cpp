/**
 * Definition: IncludePath
 * Hash: 9ad26651
 */

#include "IncludePath.h"

void IncludePath::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szPath, base, current);
  ptr += 0x10;
}
