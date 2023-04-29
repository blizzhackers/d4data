/**
 * Definition: EffectGroupDefinition
 * Hash: 7aa4c203
 */

#pragma once

#include "../types.h"
#include "EffectItem.h"
#include "t38bb2e83.h"

#pragma push(pack, 1)

struct EffectGroupDefinition : public ComplexRead {
  DT_FLOAT flDuration;
  DT_UINT dwEffectFlags;
  DT_FLOAT unk_4327903;
  DT_FLOAT unk_9cf7635;
  DT_FLOAT unk_30364bd;
  DT_ENUM<DT_INT> unk_43960c1;
  EffectItem unk_e5a6bb1;
  DT_VARIABLEARRAY<EffectItem> ptEffects;
  DT_VARIABLEARRAY<DT_INT> unk_50a2c90;
  DT_ENUM<DT_INT> nEffectWeightMethod;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_SNO<SnoGroup::Power> unk_760871b;
  DT_SNO<SnoGroup::Conversation> snoConversation;
  DT_ENUM<DT_INT> unk_e7c25e0;
  DT_RANGE<DT_INT> unk_51077dd;
  DT_FIXEDARRAY<DT_UINT, 16> fPlayedBit;
  DT_VARIABLEARRAY<t38bb2e83> ptHardpoints;
  DT_UINT unk_4f7a18a;
  DT_ENUM<DT_INT> unk_adf7def;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
