/**
 * Definition: tcc8c5070
 * Hash: cc8c5070
 */

#include "tcc8c5070.h"

void tcc8c5070::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
