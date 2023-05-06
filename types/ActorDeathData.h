/**
 * Definition: ActorDeathData
 * Hash: f32c2fd9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorDeathData : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::EffectGroup>, 6> unk_3d62da6;
  DT_SNO<SnoGroup::Power> unk_8ffea83;
  DT_INT unk_6f9a204;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
