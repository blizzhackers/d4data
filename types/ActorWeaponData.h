/**
 * Definition: ActorWeaponData
 * Hash: 84cde9fd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorWeaponData : public ComplexRead {
  DT_ENUM<DT_INT> unk_d70e05d;
  DT_SNO<SnoGroup::Actor> unk_9091fe1;
  DT_SNO<SnoGroup::Actor> unk_fc9a871;
  DT_SNO<SnoGroup::EffectGroup> unk_9c45777;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
