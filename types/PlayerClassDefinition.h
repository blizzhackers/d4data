/**
 * Definition: PlayerClassDefinition
 * Hash: d83c8e8c
 */

#pragma once

#include "../types.h"
#include "ActorFacingData.h"
#include "ItemTier.h"
#include "t1bcc547f.h"
#include "t22ec1295.h"
#include "t2b27b554.h"
#include "t5c9de2d4.h"
#include "t78eea585.h"
#include "ta3556f7f.h"
#include "ta7197c02.h"
#include "tda21c503.h"

#pragma push(pack, 1)

struct PlayerClassDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActorMale;
  DT_SNO<SnoGroup::Actor> snoActorFemale;
  DT_SNO<SnoGroup::TreasureClass> snoInventory;
  DT_FLOAT flStartingStrength;
  DT_FLOAT flStartingIntelligence;
  DT_FLOAT flStartingWillpower;
  DT_FLOAT flStartingDexterity;
  DT_FLOAT flAttributesHitPoints;
  DT_FLOAT unk_81247b7;
  DT_FLOAT unk_9ae1b37;
  DT_FLOAT unk_9ae1b42;
  t78eea585 tPrimaryResource;
  t78eea585 tSecondaryResource;
  DT_FLOAT unk_b34fba9;
  DT_FLOAT flAttributesWalkSpeed;
  DT_FLOAT flAttributesRunSpeed;
  DT_FLOAT flVelRule;
  DT_FLOAT unk_7b1fc5b;
  ActorFacingData tFacingData;
  DT_FLOAT flAttributesCritPercentBase;
  DT_FLOAT unk_2ab0a5f;
  DT_FLOAT flAttributesResistFire;
  DT_FLOAT flAttributesResistLightning;
  DT_FLOAT flAttributesResistCold;
  DT_FLOAT flAttributesResistPoison;
  DT_FLOAT flAttributesResistShadow;
  DT_FLOAT flAttributesResistChill;
  DT_FLOAT unk_3b3eb32;
  DT_FIXEDARRAY<t1bcc547f, 4> unk_80a72d5;
  DT_GBID<0x22> unk_39a9625;
  DT_SNO<SnoGroup::SkillKit> snoSkillKit;
  DT_SNO<SnoGroup::SkillKit> unk_456c862;
  DT_SNO<SnoGroup::Power> unk_1d2596f;
  DT_FIXEDARRAY<DT_UINT, 6> unk_f52d089;
  DT_SNO<SnoGroup::Power> unk_943a946;
  DT_SNO<SnoGroup::Actor> unk_26564ba;
  DT_INT unk_63df9da;
  t5c9de2d4 unk_f5e5a05;
  ta3556f7f unk_615e6b0;
  ta7197c02 unk_3357193;
  t22ec1295 unk_5ac89c6;
  t2b27b554 unk_d2d8a65;
  DT_VARIABLEARRAY<ItemTier> arItemTiers;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ParagonBoard>> unk_a8e6837;
  tda21c503 unk_b3a4391;
  DT_SNO<SnoGroup::World> unk_17ee464;
  DT_SNO<SnoGroup::World> unk_a4bc7c3;
  DT_UINT unk_1b99fc4;
  DT_SNO<SnoGroup::EffectGroup> unk_eab00df;
  DT_SNO<SnoGroup::EffectGroup> unk_8979ddf;
  DT_UINT unk_a15f17d;
  DT_SNO<SnoGroup::EffectGroup> unk_b81b6f8;
  DT_SNO<SnoGroup::EffectGroup> unk_9d88058;
  DT_SNO<SnoGroup::EffectGroup> unk_3c51d58;
  DT_SNO<SnoGroup::EffectGroup> unk_c88ca1;
  DT_SNO<SnoGroup::EffectGroup> unk_85b42dd;
  DT_SNO<SnoGroup::EffectGroup> unk_5529fd9;
  DT_SNO<SnoGroup::EffectGroup> unk_9da7619;
  DT_SNO<SnoGroup::EffectGroup> unk_311f93e;
  DT_UINT unk_db15dcc;
  DT_UINT unk_480ce4d;
  DT_UINT unk_c204c1f;
  DT_UINT unk_ac2a184;
  DT_UINT unk_f9a8bfb;
  DT_UINT unk_c68960d;
  DT_UINT unk_f4db603;
  DT_UINT unk_f4401b8;
  DT_UINT unk_f38a271;
  DT_UINT unk_71458eb;
  DT_UINT unk_a996ec1;
  DT_UINT unk_699692c;
  DT_UINT unk_f5348c2;
  DT_UINT unk_4996ef8;
  DT_UINT unk_1052b5d;
  DT_UINT unk_a43c1cd;
  DT_UINT unk_448f16c;
  DT_SNO<SnoGroup::StringList> snoNamesMale;
  DT_SNO<SnoGroup::StringList> snoNamesFemale;
  DT_UINT unk_a0254bb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
