/**
 * Definition: AchievementDefinition
 * Hash: c9595672
 */

#pragma once

#include "../types.h"
#include "CriteriaDefinition.h"
#include "RewardDefinition.h"
#include "t602be163.h"
#include "t97f642a2.h"
#include "tb560d7ec.h"

#pragma push(pack, 1)

struct AchievementDefinition : public ComplexRead {
  DT_UINT uPointsValue;
  DT_UINT dwNextID;
  DT_UINT uMinRequiredCriteria;
  DT_SNO<SnoGroup::Achievement> unk_d8ffc53;
  DT_UINT uFlags;
  DT_UINT unk_aa46967;
  DT_VARIABLEARRAY<CriteriaDefinition> unk_8b76c22;
  DT_VARIABLEARRAY<RewardDefinition> unk_e8e4934;
  t97f642a2 unk_da26abf;
  t602be163 unk_9c99920;
  tb560d7ec unk_17fe2c9;
  DT_UINT hImage;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
