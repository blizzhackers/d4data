/**
 * Definition: t9bdeeb8c
 * Hash: 9bdeeb8c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9bdeeb8c : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Dye>, 4> unk_28d5aa0;
  DT_INT unk_605f291;
  DT_INT nSkinColor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
