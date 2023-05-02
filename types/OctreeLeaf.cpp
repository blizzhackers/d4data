/**
 * Definition: OctreeLeaf
 * Hash: 938e1a3a
 */

#include "OctreeLeaf.h"

void OctreeLeaf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nPrimitiveIndex, base, current);
  current = ptr + 0x4;
  readData(&nPrimitiveCount, base, current);
  ptr += 0x8;
}
