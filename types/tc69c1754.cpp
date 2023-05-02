/**
 * Definition: tc69c1754
 * Hash: c69c1754
 */

#include "tc69c1754.h"

void tc69c1754::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szText, base, current);
  ptr += 0x170;
}
