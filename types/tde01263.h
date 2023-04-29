/**
 * Definition: tde01263
 * Hash: de01263
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tde01263 : public ComplexRead {
  DT_SNO<SnoGroup::Affix> unk_aa3fdee;
  DT_SNO<SnoGroup::EffectGroup> unk_d6e35f3;
  DT_SNO<SnoGroup::EffectGroup> unk_cb067ec;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
