/**
 * Definition: DyeDefinition
 * Hash: 9ae2f62b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DyeDefinition : public ComplexRead {
  DT_INT unk_1290fc4;
  DT_FIXEDARRAY<DT_RGBACOLORVALUE, 24> arColorSamples;
  DT_FIXEDARRAY<DT_FLOAT, 8> unk_e0611b0;
  DT_FIXEDARRAY<DT_RGBACOLOR, 4> unk_f04c7fb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
