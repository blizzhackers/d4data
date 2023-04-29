/**
 * Definition: MarkingColorDefinition
 * Hash: fd08d251
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkingColorDefinition : public ComplexRead {
  DT_INT nSortOrder;
  DT_INT unk_7d23b1d;
  DT_FIXEDARRAY<DT_RGBACOLORVALUE, 3> unk_fc3d8a3;
  DT_FLOAT unk_37592cc;
  DT_FLOAT unk_7c43e7a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
