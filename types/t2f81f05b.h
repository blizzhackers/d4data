/**
 * Definition: t2f81f05b
 * Hash: 2f81f05b
 */

#pragma once

#include "../types.h"
#include "t2d9968c0.h"
#include "t5c44ae48.h"
#include "t8874f713.h"
#include "tb239c0ca.h"
#include "tc6ceb20c.h"

#pragma push(pack, 1)

struct t2f81f05b : public ComplexRead {
  DT_ENUM<DT_INT> eGender;
  DT_INT fIsNPC;
  DT_INT unk_7c902e4;
  DT_INT unk_ac5481c;
  DT_SNO<SnoGroup::Sound> unk_59a87ea;
  DT_SNO<SnoGroup::Power> unk_ac1cb2e;
  DT_FLOAT unk_765a638;
  tc6ceb20c unk_32c6d80;
  DT_ENUM<DT_INT> eHirelingClass;
  DT_INT unk_91ce34f;
  DT_VARIABLEARRAY<t5c44ae48> unk_6bce993;
  DT_FLOAT unk_6b4a81d;
  DT_SNO<SnoGroup::MonsterFamily> snoMonsterFamily;
  DT_UINT szArchetype;
  DT_ENUM<DT_INT> eBaseElement;
  DT_SNO<SnoGroup::ItemType> snoMainHand;
  DT_SNO<SnoGroup::ItemType> snoOffHand;
  t8874f713 tLevelScaling;
  DT_INT nGoldGranted;
  DT_SNO<SnoGroup::TreasureClass> snoTreasureClass;
  DT_SNO<SnoGroup::TreasureClass> unk_fe8fc24;
  DT_SNO<SnoGroup::TreasureClass> unk_681033;
  DT_FLOAT flSummonLifetime;
  DT_INT nSummonMaxConcurrent;
  DT_INT nSummonMaxTotal;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::AiBehavior>, 6> arAIBehaviors;
  DT_INT bKillSummonsOnDeath;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Actor>, 6> snoSummonActor;
  DT_VARIABLEARRAY<tb239c0ca> unk_25bcd9e;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::MonsterAffix>, 4> snoAffixes;
  DT_FIXEDARRAY<t2d9968c0, 4> unk_c8306c;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::MonsterAffix>> snoDisallowedAffixes;
  DT_ENUM<DT_INT> eAITargetStyleNormal;
  DT_ENUM<DT_INT> unk_67e18ba;
  DT_GBID<0x2a> unk_130279f;
  DT_GBID<0x2a> unk_4b9e5c9;
  DT_UINT unk_e7a2637;
  DT_CHARARRAY<128> szInternalName;
  DT_INT unk_d3dddc4;
  DT_INT unk_50569ba;
  DT_UINT unk_7a3dc4a;
  DT_SNO<SnoGroup::Actor> snoMount;
  DT_SNO<SnoGroup::Power> unk_bdcea76;
  DT_ENUM<DT_INT> unk_87dbd3a;
  DT_INT unk_7859c5b;
  DT_INT unk_6c2321d;
  DT_INT unk_bc58cee;
  DT_INT unk_7fdab9c;
  DT_INT unk_e7ee8f1;
  DT_INT unk_e4c90d3;
  DT_INT unk_12ecd6a;
  DT_FLOAT unk_be45ce0;
  DT_FLOAT unk_db6a7c7;
  DT_SNO<SnoGroup::EffectGroup> unk_c2cc767;
  DT_SNO<SnoGroup::Power> snoStaggerPower;
  DT_SNO<SnoGroup::Stagger> unk_5c533ce;
  DT_SNO<SnoGroup::Observer> unk_33c346f;
  DT_FLOAT unk_1627b04;
  DT_FLOAT unk_401e0d6;
  DT_FLOAT unk_401dfd8;
  DT_FLOAT unk_f68cd00;
  DT_FLOAT unk_f68cc02;
  DT_FLOAT unk_16266ca;
  DT_FLOAT unk_5428a5e;
  DT_FLOAT unk_3b9132c;
  DT_FLOAT lOverkill;
  DT_FLOAT unk_d5178b2;
  DT_FLOAT unk_e08f0df;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
