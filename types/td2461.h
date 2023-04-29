/**
 * Definition: td2461
 * Hash: d2461
 */

#pragma once

#include "../types.h"
#include "GBHandle.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td2461 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<GBHandle, 64> unk_25d9f91;
  DT_FIXEDARRAY<DT_UINT, 64> unk_2498be;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
