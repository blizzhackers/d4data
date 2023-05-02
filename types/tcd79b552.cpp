/**
 * Definition: tcd79b552
 * Hash: cd79b552
 */

#include "tcd79b552.h"

void tcd79b552::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwNodeIndex, base, current);
  ptr += 0x14;
}
