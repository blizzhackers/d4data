/**
 * Definition: FlagSetDefinition
 * Hash: 41c7650f
 */

#pragma once

#include "../types.h"
#include "FlagLookup.h"

#pragma push(pack, 1)

struct FlagSetDefinition : public ComplexRead {
  DT_VARIABLEARRAY<FlagLookup> arFlagLookups;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
