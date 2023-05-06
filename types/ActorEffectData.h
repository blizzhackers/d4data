/**
 * Definition: ActorEffectData
 * Hash: e3835e40
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorEffectData : public ComplexRead {
  DT_INT unk_a8ed4c;
  DT_INT unk_ddbb22c;
  DT_INT unk_5955ed3;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::EffectGroup>, 6> unk_2bf030e;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::EffectGroup>, 6> unk_e36d5f3;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::EffectGroup>, 6> unk_9cf41a7;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::EffectGroup>, 6> unk_4ed2a5b;
  DT_SNO<SnoGroup::EffectGroup> unk_483a88d;
  DT_SNO<SnoGroup::EffectGroup> unk_8d8c7ee;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
