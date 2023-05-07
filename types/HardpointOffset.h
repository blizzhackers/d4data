/**
 * Definition: HardpointOffset
 * Hash: dc622f50
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct HardpointOffset : public ComplexRead {
  HardpointLink tHardpointLink;
  DT_VECTOR3D vecOffset;
  bcQuat unk_d52bb88;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
