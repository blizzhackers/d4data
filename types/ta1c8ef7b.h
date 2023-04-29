/**
 * Definition: ta1c8ef7b
 * Hash: a1c8ef7b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ta1c8ef7b : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<DT_SNO_NAME, 64> unk_37dfbcb;
  DT_FIXEDARRAY<DT_UINT, 64> unk_729a938;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
