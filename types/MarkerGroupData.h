/**
 * Definition: MarkerGroupData
 * Hash: c575fa49
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct MarkerGroupData : public ComplexRead {
  PRTransform tLocalTransform;
  DT_VECTOR3D unk_80dc871;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
