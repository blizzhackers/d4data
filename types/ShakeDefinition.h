/**
 * Definition: ShakeDefinition
 * Hash: ed97ed75
 */

#pragma once

#include "../types.h"
#include "VectorPath.h"

#pragma push(pack, 1)

struct ShakeDefinition : public ComplexRead {
  DT_UINT dwShakeFlags;
  DT_FLOAT tSystemDuration;
  DT_FLOAT tOutroDuration;
  DT_FLOAT wdMinRange;
  DT_FLOAT wdMaxRange;
  VectorPath pathCameraPositionAmplitude;
  VectorPath pathCameraPositionFrequency;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
