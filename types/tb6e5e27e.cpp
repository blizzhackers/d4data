/**
 * Definition: tb6e5e27e
 * Hash: b6e5e27e
 */

#include "tb6e5e27e.h"

void tb6e5e27e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
