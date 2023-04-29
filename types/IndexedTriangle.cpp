/**
 * Definition: IndexedTriangle
 * Hash: bb66ea97
 */

#include "IndexedTriangle.h"

void IndexedTriangle::read(const char* base, char* &ptr) {
  readData(&a, base, ptr);
  readData(&b, base, ptr);
  readData(&c, base, ptr);
}
