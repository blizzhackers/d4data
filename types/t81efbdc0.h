/**
 * Definition: t81efbdc0
 * Hash: 81efbdc0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t81efbdc0 : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_UINT unk_6c0cb90;
  DT_UINT unk_7fd3994;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
