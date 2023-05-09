/**
 * Definition: tf83b7dfa
 * Hash: f83b7dfa
 */

#pragma once

#include "../types.h"
#include "HealthPotionData.h"

#pragma push(pack, 1)

struct tf83b7dfa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<HealthPotionData> unk_cae89f5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
