/**
 * Definition: OctreeLeaf
 * Hash: 938e1a3a
 */

#include "OctreeLeaf.h"

void OctreeLeaf::read(const char* base, char* &ptr) {
  readData(&nPrimitiveIndex, base, ptr);
  readData(&nPrimitiveCount, base, ptr);
}
