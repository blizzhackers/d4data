/**
 * Definition: tc2e1c5fc
 * Hash: c2e1c5fc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc2e1c5fc : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> snoEffect;
  DT_FLOAT unk_f63dc45;
  DT_INT unk_a4ec910;
  DT_FLOAT unk_52ba359;
  DT_FLOAT unk_430ecb0;
  DT_FLOAT unk_7f9788f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
