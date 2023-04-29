/**
 * Definition: DPathSinData
 * Hash: eabcf935
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DPathSinData : public ComplexRead {
  DT_FLOAT flSinIncPerTick;
  DT_FLOAT flSinIncAccel;
  DT_FLOAT flLateralMaxDistance;
  DT_FLOAT flOOLateralDistanceToScale;
  DT_FLOAT flLateralStartDistance;
  DT_FLOAT flSpeed;
  DT_ACD_NETWORK_NAME annOwner;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
