/**
 * Definition: t18f0338c
 * Hash: 18f0338c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tf0f63f3d.h"

#pragma push(pack, 1)

struct t18f0338c : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_FIXEDARRAY<tf0f63f3d, 5> unk_eb9441e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
