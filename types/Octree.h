/**
 * Definition: Octree
 * Hash: bf8891e2
 */

#pragma once

#include "../types.h"
#include "OctreeCube.h"
#include "OctreeLeaf.h"
#include "OctreeNode.h"
#include "OctreePrimitive.h"

#pragma push(pack, 1)

struct Octree : public ComplexRead {
  DT_INT nMaxNodes;
  DT_INT nMaxLeaves;
  DT_INT nMaxPrimitives;
  DT_INT nNodeCount;
  DT_INT nLeafCount;
  DT_INT nPrimitiveCount;
  OctreeCube unk_1403097;
  DT_VARIABLEARRAY<OctreeNode> ptNodes;
  DT_VARIABLEARRAY<OctreeLeaf> ptLeaves;
  DT_VARIABLEARRAY<OctreePrimitive> ptPrimitives;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
