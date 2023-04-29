/**
 * Definition: WorldLocationMessageData
 * Hash: 524ff320
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct WorldLocationMessageData : public ComplexRead {
  DT_VECTOR3D vScale;
  PRTransform transform;
  DT_SHARED_SERVER_DATA_ID idSWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
