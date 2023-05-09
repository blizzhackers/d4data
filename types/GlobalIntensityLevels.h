/**
 * Definition: GlobalIntensityLevels
 * Hash: 93bb0983
 */

#pragma once

#include "../types.h"
#include "IntensityParam.h"

#pragma push(pack, 1)

struct GlobalIntensityLevels : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<IntensityParam> arParams;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
