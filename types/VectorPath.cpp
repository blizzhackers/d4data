/**
 * Definition: VectorPath
 * Hash: 9aa74280
 */

#include "VectorPath.h"

void VectorPath::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tPathData, base, current);
  ptr += 0x38;
}
