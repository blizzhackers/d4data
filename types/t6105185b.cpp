/**
 * Definition: t6105185b
 * Hash: 6105185b
 */

#include "t6105185b.h"

void t6105185b::read(const char* base, char* &ptr) {
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
  readData(&snoAffix, base, current);
  ptr += 0x20;
}
