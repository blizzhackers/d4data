/**
 * Definition: t1f843277
 * Hash: 1f843277
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"

#pragma push(pack, 1)

struct t1f843277 : public ComplexRead {
  HardpointLink tHardpointLink;
  DT_UINT unk_2cbb1b0;
  DT_ENUM<DT_INT> eTargetType;
  DT_UINT unk_c33645f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
