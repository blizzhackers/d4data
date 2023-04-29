/**
 * Definition: tbafb842f
 * Hash: bafb842f
 */

#pragma once

#include "../types.h"
#include "MonsterAwarenessInfo.h"
#include "t2900af1b.h"

#pragma push(pack, 1)

struct tbafb842f : public ComplexRead {
  DT_UINT unk_21d7573;
  DT_SNO<SnoGroup::AiAwareness> unk_81459e3;
  MonsterAwarenessInfo tAwareness;
  DT_UINT unk_301c43c;
  DT_UINT dwFlags;
  DT_INT unk_b291cd3;
  DT_INT unk_8495b04;
  DT_FLOAT unk_b2f47b0;
  DT_FLOAT flHPScalar;
  DT_FLOAT flDamageScalar;
  DT_RANGE<DT_INT> tDamageRange;
  DT_INT unk_100de70;
  DT_FLOAT unk_4324dae;
  DT_FLOAT unk_c9d3011;
  DT_FLOAT unk_86e7bb0;
  DT_ENUM<DT_INT> unk_ccbd7c6;
  DT_ENUM<DT_INT> unk_a5b8d03;
  DT_ENUM<DT_INT> unk_773ad4d;
  DT_FLOAT unk_94e6590;
  DT_FLOAT unk_7383884;
  DT_FLOAT unk_5f8b5e1;
  DT_FLOAT unk_5ee8c01;
  DT_RANGE<DT_INT> unk_44694db;
  DT_FLOAT flAcceleration;
  DT_FLOAT unk_fbee832;
  DT_GBID<0x22> unk_39a9625;
  DT_GBID<0x22> unk_194112d;
  t2900af1b unk_42b26d6;
  DT_SNO<SnoGroup::Power> snoSummonPower;
  DT_SNO<SnoGroup::Power> unk_f73b6d9;
  DT_SNO<SnoGroup::EffectGroup> unk_c2cc767;
  DT_SNO<SnoGroup::Power> snoStaggerPower;
  DT_FLOAT unk_e1387c3;
  DT_FLOAT unk_5e90f68;
  DT_FLOAT unk_74e754e;
  DT_FLOAT unk_9b62fa5;
  DT_FLOAT unk_18bb74a;
  DT_VARIABLEARRAY<DT_FLOAT> unk_9831607;
  DT_SNO<SnoGroup::Observer> unk_33c346f;
  DT_FLOAT unk_1627b04;
  DT_FLOAT unk_121fc92;
  DT_FLOAT unk_5428a5e;
  DT_FLOAT unk_3b9132c;
  DT_FLOAT lOverkill;
  DT_FLOAT unk_d5178b2;
  DT_FLOAT unk_e08f0df;
  DT_INT unk_c86d0b9;
  DT_FLOAT unk_d544bbb;
  DT_ENUM<DT_INT> eTiltType;
  DT_ENUM<DT_INT> unk_aca2ee7;
  DT_FLOAT unk_2401865;
  DT_FLOAT unk_94abb4e;
  DT_FLOAT unk_f50871;
  DT_INT unk_38d1c6b;
  DT_INT unk_63732a6;
  DT_INT unk_904bb00;
  DT_INT unk_28c7e7c;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::MonsterAffix>> snoDisallowedAffixes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
