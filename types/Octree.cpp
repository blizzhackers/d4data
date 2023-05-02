/**
 * Definition: Octree
 * Hash: bf8891e2
 */

#include "Octree.h"

void Octree::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nMaxNodes, base, current);
  current = ptr + 0x4;
  readData(&nMaxLeaves, base, current);
  current = ptr + 0x8;
  readData(&nMaxPrimitives, base, current);
  current = ptr + 0xc;
  readData(&nNodeCount, base, current);
  current = ptr + 0x10;
  readData(&nLeafCount, base, current);
  current = ptr + 0x14;
  readData(&nPrimitiveCount, base, current);
  current = ptr + 0x18;
  readData(&unk_1403097, base, current);
  current = ptr + 0x28;
  readData(&ptNodes, base, current);
  current = ptr + 0x38;
  readData(&ptLeaves, base, current);
  current = ptr + 0x48;
  readData(&ptPrimitives, base, current);
  ptr += 0x58;
}
