/**
 * Definition: tef0eb7cf
 * Hash: ef0eb7cf
 */

#include "tef0eb7cf.h"

void tef0eb7cf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptVertices, base, current);
  current = ptr + 0x10;
  readData(&ptTriangles, base, current);
  ptr += 0x20;
}
