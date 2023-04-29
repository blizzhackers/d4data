/**
 * Definition: OctreeNode
 * Hash: 938f5de8
 */

#include "OctreeNode.h"

void OctreeNode::read(const char* base, char* &ptr) {
  readData(&pdwChildren, base, ptr);
}
