/**
 * Definition: t7b33e6d7
 * Hash: 7b33e6d7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7b33e6d7 : public ComplexRead {
  DT_UINT dwID;
  DT_FIXEDARRAY<DT_RGBACOLOR, 3> unk_b29fdae;
  DT_FLOAT unk_49f94ee;
  DT_CSTRING szLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
