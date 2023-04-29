/**
 * Definition: t61d80fcd
 * Hash: 61d80fcd
 */

#include "t61d80fcd.h"

void t61d80fcd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&gbidActorGroup, base, ptr);
}
