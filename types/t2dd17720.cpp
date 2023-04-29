/**
 * Definition: t2dd17720
 * Hash: 2dd17720
 */

#include "t2dd17720.h"

void t2dd17720::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
