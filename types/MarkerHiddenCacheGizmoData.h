/**
 * Definition: MarkerHiddenCacheGizmoData
 * Hash: a967fc2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerHiddenCacheGizmoData : public ComplexRead {
  DT_GBID<0x1c> gbidHiddenCache;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
