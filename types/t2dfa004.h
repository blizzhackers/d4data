/**
 * Definition: t2dfa004
 * Hash: 2dfa004
 */

#pragma once

#include "../types.h"
#include "te3f5648a.h"

#pragma push(pack, 1)

struct t2dfa004 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY ptProxData;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;
  DT_SNO<SnoGroup::EffectGroup> unk_877fa6b;
  DT_INT fDisabled;
  DT_INT unk_80c961e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
