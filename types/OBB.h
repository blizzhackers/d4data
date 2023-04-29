/**
 * Definition: OBB
 * Hash: 158d3
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct OBB : public ComplexRead {
  PRTransform transform;
  DT_VECTOR3D wvExt;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
