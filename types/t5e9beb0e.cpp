/**
 * Definition: t5e9beb0e
 * Hash: 5e9beb0e
 */

#include "t5e9beb0e.h"

void t5e9beb0e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  ptr += 0x20;
}
