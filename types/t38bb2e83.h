/**
 * Definition: t38bb2e83
 * Hash: 38bb2e83
 */

#pragma once

#include "../types.h"
#include "HardpointInfo.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct t38bb2e83 : public ComplexRead {
  HardpointInfo tInfo;
  PRTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
