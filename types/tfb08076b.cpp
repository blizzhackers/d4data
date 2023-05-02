/**
 * Definition: tfb08076b
 * Hash: fb08076b
 */

#include "tfb08076b.h"

void tfb08076b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
