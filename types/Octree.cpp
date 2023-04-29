/**
 * Definition: Octree
 * Hash: bf8891e2
 */

#include "Octree.h"

void Octree::read(const char* base, char* &ptr) {
  readData(&nMaxNodes, base, ptr);
  readData(&nMaxLeaves, base, ptr);
  readData(&nMaxPrimitives, base, ptr);
  readData(&nNodeCount, base, ptr);
  readData(&nLeafCount, base, ptr);
  readData(&nPrimitiveCount, base, ptr);
  readData(&unk_1403097, base, ptr);
  readData(&ptNodes, base, ptr);
  readData(&ptLeaves, base, ptr);
  readData(&ptPrimitives, base, ptr);
}
