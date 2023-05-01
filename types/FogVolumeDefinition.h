/**
 * Definition: FogVolumeDefinition
 * Hash: 1291b7fd
 */

#pragma once

#include "../types.h"
#include "t3248a683.h"

#pragma push(pack, 1)

struct FogVolumeDefinition : public ComplexRead {
  t3248a683 tInstanceData;
  DT_VECTOR3D vecScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
