/**
 * Definition: CriteriaStartEvent
 * Hash: ff813843
 */

#pragma once

#include "../types.h"
#include "CriteriaModifier.h"

#pragma push(pack, 1)

struct CriteriaStartEvent : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eId;
  DT_VARIABLEARRAY<CriteriaModifier> arModifier;
  DT_SNO_NAME snoname;
  DT_ENUM<DT_INT> eGizmoType;
  DT_ENUM<DT_INT> eIQL;
  DT_ENUM<DT_INT> eSlot;
  DT_ENUM<DT_INT> eHealType;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_ENUM<DT_INT> unk_756ebc1;
  DT_UINT uVal;
  DT_GBID<0x3e> gbidAchievementEvent;
  DT_INT64 uOperand;
  DT_INT unk_a3ab54b;
  DT_UINT dwPad;
  DT_INT64 uTimerDuration;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
