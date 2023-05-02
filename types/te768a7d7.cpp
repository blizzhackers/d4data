/**
 * Definition: te768a7d7
 * Hash: e768a7d7
 */

#include "te768a7d7.h"

void te768a7d7::read(const char* base, char* &ptr) {
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
