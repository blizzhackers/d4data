/**
 * Definition: MarkerLightData
 * Hash: 37b71f34
 */

#pragma once

#include "../types.h"
#include "LightInstanceData.h"

#pragma push(pack, 1)

struct MarkerLightData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  LightInstanceData tInstanceData;
  DT_INT unk_ef69835;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
