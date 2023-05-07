/**
 * Definition: SceneData
 * Hash: 886a0448
 */

#pragma once

#include "../types.h"
#include "Octree.h"
#include "SurfaceGrid.h"
#include "t65cf645d.h"
#include "te6694729.h"

#pragma push(pack, 1)

struct SceneData : public ComplexRead {
  DT_VARIABLEARRAY<te6694729> unk_1197220;
  DT_INT unk_b3a0ae7;
  DT_VARIABLEARRAY<Octree> unk_1c11c0f;
  DT_VARIABLEARRAY<SurfaceGrid> ptSurfaceGrid;
  DT_VARIABLEARRAY<t65cf645d> unk_da9dcc1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
