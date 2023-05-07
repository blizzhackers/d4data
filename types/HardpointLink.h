/**
 * Definition: HardpointLink
 * Hash: d8f028b7
 */

#pragma once

#include "../types.h"
#include "HardpointInfo.h"

#pragma push(pack, 1)

struct HardpointLink : public ComplexRead {
  HardpointInfo tInfo;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
