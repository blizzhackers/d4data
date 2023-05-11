/**
 * Definition: MarkerPrefabData
 * Hash: ba69c62c
 */

#pragma once

#include "../types.h"
#include "PrefabCustomization.h"

#pragma push(pack, 1)

struct MarkerPrefabData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<PrefabCustomization> arPrefabCustomizations;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
