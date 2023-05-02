/**
 * Definition: t6c5b85fd
 * Hash: 6c5b85fd
 */

#include "t6c5b85fd.h"

void t6c5b85fd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwNodeIndex, base, current);
  ptr += 0x14;
}
