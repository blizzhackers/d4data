/**
 * Definition: SurfaceGrid
 * Hash: 3094844f
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "SurfaceGridPrimitive.h"

#pragma push(pack, 1)

struct SurfaceGrid : public ComplexRead {
  DT_VARIABLEARRAY<DT_WORD> grid;
  DT_VARIABLEARRAY<SurfaceGridPrimitive> arPrimitives;
  AABB aabbBounds;
  DT_UINT dwRows;
  DT_UINT dwColumns;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
