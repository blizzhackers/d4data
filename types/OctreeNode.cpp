/**
 * Definition: OctreeNode
 * Hash: 938f5de8
 */

#include "OctreeNode.h"

void OctreeNode::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&pdwChildren, base, current);
  ptr += 0x20;
}
