/**
 * Definition: tb1d65a81
 * Hash: b1d65a81
 */

#include "tb1d65a81.h"

void tb1d65a81::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
