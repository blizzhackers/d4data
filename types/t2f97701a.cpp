/**
 * Definition: t2f97701a
 * Hash: 2f97701a
 */

#include "t2f97701a.h"

void t2f97701a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
