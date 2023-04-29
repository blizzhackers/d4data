/**
 * Definition: SavedCameraState
 * Hash: 81dc7d
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct SavedCameraState : public ComplexRead {
  PRTransform transform;
  DT_VECTOR3D wvCameraOffsetVector;
  DT_VECTOR3D wvLookAtOffsetVector;
  DT_VECTOR3D wvLastPOI;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
