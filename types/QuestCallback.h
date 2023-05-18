/**
 * Definition: QuestCallback
 * Hash: b6d4355f
 */

#pragma once

#include "../types.h"
#include "QuestCallbackRegion.h"
#include "ReputationValuePair.h"
#include "ScriptMessageMap.h"

#pragma push(pack, 1)

struct QuestCallback : public ComplexRead {
  DT_ENUM<DT_INT> unk_b185921;
  DT_ENUM<DT_INT> unk_5342cc0;
  DT_UINT dwUID;
  DT_UINT dwFlags;
  DT_UINT nNeeded;
  ScriptMessageMap tScriptMessageMap;
  DT_INT dwLinesSeconds;
  DT_INT unk_47705e2;
  DT_ENUM<DT_INT> unk_92f72a4;
  DT_UINT unk_9c1ea4f;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::Conversation> unk_e879cce;
  DT_CSTRING unk_28bc3c5;
  DT_INT unk_53ba3a1;
  QuestCallbackRegion tRegionDefault;
  DT_VARIABLEARRAY<QuestCallbackRegion> unk_debbaea;
  DT_INT unk_6a71535;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> arLevelAreas;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::SubZone>> unk_c9913ac;
  DT_VARIABLEARRAY<DT_SNO_NAME> unk_ab83298;
  ReputationValuePair unk_a71fd1a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
