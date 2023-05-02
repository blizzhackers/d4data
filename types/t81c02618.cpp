/**
 * Definition: t81c02618
 * Hash: 81c02618
 */

#include "t81c02618.h"

void t81c02618::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tValue, base, current);
  ptr += 0xc;
}
