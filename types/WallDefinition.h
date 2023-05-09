/**
 * Definition: WallDefinition
 * Hash: e4a7d659
 */

#pragma once

#include "../types.h"
#include "WallInstanceData.h"

#pragma push(pack, 1)

struct WallDefinition : public ComplexRead {
  WallInstanceData tInstanceData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
