/**
 * Definition: t859de469
 * Hash: 859de469
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "t31826a49.h"
#include "te27b5b4a.h"

#pragma push(pack, 1)

struct t859de469 : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  DT_VARIABLEARRAY<te27b5b4a> arSegments;
  AABB aabbBounds;
  DT_UINT dwRows;
  DT_UINT dwColumns;
  DT_VARIABLEARRAY<t31826a49> arGrid;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
