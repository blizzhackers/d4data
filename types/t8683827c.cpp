/**
 * Definition: t8683827c
 * Hash: 8683827c
 */

#include "t8683827c.h"

void t8683827c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoItem, base, ptr);
}
