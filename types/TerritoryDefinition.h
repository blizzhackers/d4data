/**
 * Definition: TerritoryDefinition
 * Hash: a0ecd25d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TerritoryDefinition : public ComplexRead {
  DT_RGBACOLOR color;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
