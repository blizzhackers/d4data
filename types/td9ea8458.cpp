/**
 * Definition: td9ea8458
 * Hash: d9ea8458
 */

#include "td9ea8458.h"

void td9ea8458::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
