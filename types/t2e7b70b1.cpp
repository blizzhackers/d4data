/**
 * Definition: t2e7b70b1
 * Hash: 2e7b70b1
 */

#include "t2e7b70b1.h"

void t2e7b70b1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&tAnimSet, base, current);
  ptr += 0xc;
}
