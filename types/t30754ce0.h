/**
 * Definition: t30754ce0
 * Hash: 30754ce0
 */

#pragma once

#include "../types.h"
#include "t3940c0fe.h"
#include "t46a557e9.h"

#pragma push(pack, 1)

struct t30754ce0 : public ComplexRead {
  DT_SNO<SnoGroup::ItemType> unk_84473c1;
  DT_SNO<SnoGroup::ItemType> unk_2c0d1b7;
  DT_UINT dwID;
  DT_ENUM<DT_INT> unk_f7143f9;
  t46a557e9 tDamage;
  DT_INT unk_16bcce1;
  DT_STRING_FORMULA unk_c05ccdc;
  DT_INT unk_c1c7b04;
  DT_STRING_FORMULA unk_907cc39;
  t46a557e9 unk_25c1506;
  DT_STRING_FORMULA tApplyFreeze;
  DT_STRING_FORMULA unk_634341a;
  DT_ENUM<DT_INT> unk_e659b0f;
  t46a557e9 tHeal;
  DT_ENUM<DT_INT> eHealType;
  DT_INT unk_58227bf;
  DT_INT unk_8bc45f2;
  DT_INT unk_15c6c03;
  DT_INT unk_e842c84;
  DT_ENUM<DT_INT> unk_b8f2b;
  DT_INT unk_79ce2e1;
  DT_STRING_FORMULA unk_ed6df7;
  DT_ENUM<DT_INT> unk_ddcd868;
  DT_SNO<SnoGroup::EffectGroup> unk_8fac698;
  DT_SNO<SnoGroup::EffectGroup> snoTargetImpactEffectGroup;
  DT_FLOAT unk_b65cd61;
  DT_INT iPowerNeedTarget;
  DT_INT unk_b9a00d9;
  DT_INT unk_969096b;
  DT_ENUM<DT_INT> unk_5885b8;
  DT_INT unk_f38eac9;
  t3940c0fe unk_67260fc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
