/**
 * Definition: tbb29c0
 * Hash: bb29c0
 */

#include "tbb29c0.h"

void tbb29c0::read(const char* base, char* &ptr) {
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
