/**
 * Definition: t61d80fcd
 * Hash: 61d80fcd
 */

#include "t61d80fcd.h"

void t61d80fcd::read(const char* base, char* &ptr) {
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
  readData(&gbidActorGroup, base, current);
  ptr += 0x20;
}
