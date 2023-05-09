/**
 * Definition: EffectGroupHardpoint
 * Hash: 38bb2e83
 */

#pragma once

#include "../types.h"
#include "HardpointInfo.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct EffectGroupHardpoint : public ComplexRead {
  HardpointInfo tInfo;
  PRTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
