/**
 * Definition: t1b14c955
 * Hash: 1b14c955
 */

#include "t1b14c955.h"

void t1b14c955::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
