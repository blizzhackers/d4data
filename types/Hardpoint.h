/**
 * Definition: Hardpoint
 * Hash: 80cdc229
 */

#pragma once

#include "../types.h"
#include "HardpointInfo.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct Hardpoint : public ComplexRead {
  HardpointInfo tInfo;
  DT_INT nBoneIndex;
  DT_INT unk_692a5dc;
  PRTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
