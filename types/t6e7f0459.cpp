/**
 * Definition: t6e7f0459
 * Hash: 6e7f0459
 */

#include "t6e7f0459.h"

void t6e7f0459::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x28;
  readData(&ptArrayNodes, base, current);
  ptr += 0x38;
}
