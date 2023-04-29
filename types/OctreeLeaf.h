/**
 * Definition: OctreeLeaf
 * Hash: 938e1a3a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct OctreeLeaf : public ComplexRead {
  DT_INT nPrimitiveIndex;
  DT_INT nPrimitiveCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
