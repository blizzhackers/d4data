/**
 * Definition: tb2ef091a
 * Hash: b2ef091a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb2ef091a : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> unk_6b62d24;
  DT_SNO<SnoGroup::EffectGroup> unk_2a51399;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
