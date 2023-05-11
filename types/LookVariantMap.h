/**
 * Definition: LookVariantMap
 * Hash: 297ea0a8
 */

#pragma once

#include "../types.h"
#include "LookVariantOverride.h"

#pragma push(pack, 1)

struct LookVariantMap : public ComplexRead {
  DT_UINT dwLookVariant;
  DT_VARIABLEARRAY<LookVariantOverride> arLookVariantOverrides;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
