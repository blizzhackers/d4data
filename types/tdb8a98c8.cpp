/**
 * Definition: tdb8a98c8
 * Hash: db8a98c8
 */

#include "tdb8a98c8.h"

void tdb8a98c8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&eVariant, base, current);
  ptr += 0x8;
}
