/**
 * Definition: tdb09f2f3
 * Hash: db09f2f3
 */

#include "tdb09f2f3.h"

void tdb09f2f3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
