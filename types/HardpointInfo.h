/**
 * Definition: HardpointInfo
 * Hash: d8ee97d5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct HardpointInfo : public ComplexRead {
  DT_UINT dwHash;
  DT_UINT dwHashFlag;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
