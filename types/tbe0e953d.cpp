/**
 * Definition: tbe0e953d
 * Hash: be0e953d
 */

#include "tbe0e953d.h"

void tbe0e953d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
