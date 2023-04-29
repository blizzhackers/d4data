/**
 * Definition: t1b14c955
 * Hash: 1b14c955
 */

#include "t1b14c955.h"

void t1b14c955::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
