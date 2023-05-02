/**
 * Definition: IndexedTriangle
 * Hash: bb66ea97
 */

#include "IndexedTriangle.h"

void IndexedTriangle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&a, base, current);
  current = ptr + 0x4;
  readData(&b, base, current);
  current = ptr + 0x8;
  readData(&c, base, current);
  ptr += 0xc;
}
