/**
 * Definition: t8eb5d0a6
 * Hash: 8eb5d0a6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8eb5d0a6 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::AudioContext> snoContext;
  DT_ENUM<DT_INT> unk_a3e2a60;
  DT_SNO<SnoGroup::EffectGroup> unk_d415903;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
