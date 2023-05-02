/**
 * Definition: t8683827c
 * Hash: 8683827c
 */

#include "t8683827c.h"

void t8683827c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&snoItem, base, current);
  ptr += 0x20;
}
