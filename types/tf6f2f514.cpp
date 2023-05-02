/**
 * Definition: tf6f2f514
 * Hash: f6f2f514
 */

#include "tf6f2f514.h"

void tf6f2f514::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nRequiredRank, base, current);
  current = ptr + 0x4;
  readData(&snoPassivePower, base, current);
  ptr += 0x8;
}
