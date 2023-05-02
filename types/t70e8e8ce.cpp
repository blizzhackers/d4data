/**
 * Definition: t70e8e8ce
 * Hash: 70e8e8ce
 */

#include "t70e8e8ce.h"

void t70e8e8ce::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
