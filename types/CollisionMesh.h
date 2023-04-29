/**
 * Definition: CollisionMesh
 * Hash: 7d15ac19
 */

#pragma once

#include "../types.h"
#include "t2f8b25ef.h"
#include "tb8e1451f.h"
#include "tc1ddc6d3.h"
#include "te5e3d6d6.h"

#pragma push(pack, 1)

struct CollisionMesh : public ComplexRead {
  tc1ddc6d3 unk_fb873e2;
  DT_VARIABLEARRAY<te5e3d6d6> ptDominoVertices;
  DT_VARIABLEARRAY<t2f8b25ef> ptDominoTriangles;
  DT_VARIABLEARRAY<tb8e1451f> ptDominoNodes;
  DT_INT unk_b2f6ec8;
  DT_UINT uFlags;
  DT_UINT uMaterial;
  DT_WORD uGroupIndex;
  DT_VARIABLEARRAY<DT_UINT> unk_732e0b0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
