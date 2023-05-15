/**
 * Definition: SceneData
 * Hash: 886a0448
 */

#pragma once

#include "../types.h"
#include "FoliageGrid.h"
#include "Octree.h"
#include "SurfaceGrid.h"
#include "te6694729.h"

#pragma push(pack, 1)

struct SceneData : public ComplexRead {
  DT_VARIABLEARRAY<te6694729> unk_1197220;
  DT_INT unk_b3a0ae7;
  DT_VARIABLEARRAY<Octree> ptSurfaceOctree;
  DT_VARIABLEARRAY<SurfaceGrid> ptSurfaceGrid;
  DT_VARIABLEARRAY<FoliageGrid> ptFoliageGrid;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
