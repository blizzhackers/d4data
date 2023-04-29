/**
 * Definition: tf67f0209
 * Hash: f67f0209
 */

#pragma once

#include "../types.h"
#include "LevelScalingDefinition.h"

#pragma push(pack, 1)

struct tf67f0209 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<LevelScalingDefinition> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
