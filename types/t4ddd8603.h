/**
 * Definition: t4ddd8603
 * Hash: 4ddd8603
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4ddd8603 : public ComplexRead {
  DT_ENUM<DT_INT> unk_5ce8bfb;
  DT_INT unk_df09d6a;
  DT_SNO<SnoGroup::EffectGroup> unk_6d3dfe6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
