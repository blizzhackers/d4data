/**
 * Definition: tb8e06bbf
 * Hash: b8e06bbf
 */

#pragma once

#include "../types.h"
#include "AnimTreeBlendCase.h"
#include "tdf12c188.h"

#pragma push(pack, 1)

struct tb8e06bbf : public ComplexRead {
  AnimTreeBlendCase tBlendCase;
  AnimTreeBlendCase unk_23a523d;
  tdf12c188 tCondition;
  DT_UINT dwChildIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
