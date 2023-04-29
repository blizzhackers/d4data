/**
 * Definition: UIEffect
 * Hash: d9a620b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct UIEffect : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  DT_CSTRING unk_25f3563;
  DT_ENUM<DT_INT> unk_5d19bee;
  DT_VECTOR2D vecScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
