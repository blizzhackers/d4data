/**
 * Definition: teb33110a
 * Hash: eb33110a
 */

#include "teb33110a.h"

void teb33110a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&uBlobSize, base, current);
  ptr += 0x18;
}
