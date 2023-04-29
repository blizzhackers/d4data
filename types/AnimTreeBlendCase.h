/**
 * Definition: AnimTreeBlendCase
 * Hash: e27f08f6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnimTreeBlendCase : public ComplexRead {
  DT_ENUM<DT_INT> eParam;
  DT_INT unk_7ca6aa6;
  DT_FLOAT unk_68b4f15;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
