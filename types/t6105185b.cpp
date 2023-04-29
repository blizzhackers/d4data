/**
 * Definition: t6105185b
 * Hash: 6105185b
 */

#include "t6105185b.h"

void t6105185b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eSubject, base, ptr);
  readData(&snoAffix, base, ptr);
}
