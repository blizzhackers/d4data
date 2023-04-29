/**
 * Definition: OctreeNode
 * Hash: 938f5de8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct OctreeNode : public ComplexRead {
  DT_FIXEDARRAY<DT_UINT, 8> pdwChildren;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
