/**
 * Definition: tb42131c6
 * Hash: b42131c6
 */

#include "tb42131c6.h"

void tb42131c6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwOffset, base, current);
  current = ptr + 0x4;
  readData(&dwCount, base, current);
  ptr += 0x8;
}
