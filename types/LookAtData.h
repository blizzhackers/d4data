/**
 * Definition: LookAtData
 * Hash: f2342884
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"
#include "tdd2a5307.h"
#include "tf2334a8e.h"

#pragma push(pack, 1)

struct LookAtData : public ComplexRead {
  DT_FLOAT flRange;
  DT_FLOAT unk_5115351;
  DT_VARIABLEARRAY<tf2334a8e> arBones;
  tdd2a5307 unk_1f415fb;
  HardpointLink unk_8470ffc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
