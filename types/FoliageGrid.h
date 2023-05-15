/**
 * Definition: FoliageGrid
 * Hash: 65cf645d
 */

#pragma once

#include "../types.h"
#include "AABB.h"

#pragma push(pack, 1)

struct FoliageGrid : public ComplexRead {
  DT_VARIABLEARRAY<DT_UINT> grid;
  AABB aabbBounds;
  DT_UINT dwRows;
  DT_UINT dwColumns;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
