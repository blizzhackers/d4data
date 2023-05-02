/**
 * Definition: t75e1365e
 * Hash: 75e1365e
 */

#include "t75e1365e.h"

void t75e1365e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoMusic, base, current);
  ptr += 0x14;
}
