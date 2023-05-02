/**
 * Definition: tfd884ad3
 * Hash: fd884ad3
 */

#include "tfd884ad3.h"

void tfd884ad3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&startIndex, base, current);
  current = ptr + 0x2;
  readData(&endIndex, base, current);
  ptr += 0x4;
}
