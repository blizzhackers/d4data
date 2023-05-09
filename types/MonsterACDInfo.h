/**
 * Definition: MonsterACDInfo
 * Hash: 59bc9f5c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MonsterACDInfo : public ComplexRead {
  DT_ENUM<DT_INT> unk_d1f4575;
  DT_ENUM<DT_INT> eGender;
  DT_ENUM<DT_INT> eWeaponClass;
  DT_SNO<SnoGroup::AnimSet> unk_e1f5441;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::MonsterAffix>, 4> snoMonsterAffixes;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::MonsterAffix>, 4> unk_bec65ae;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
