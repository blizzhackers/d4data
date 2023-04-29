/**
 * Definition: TrickleMessage
 * Hash: 9632e493
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct TrickleMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Actor> snoActor;
  SharedServerWorldPlace tPlace;
  DT_OPTIONAL<DT_INT> unk_70bf7e7;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_OPTIONAL<DT_INT> flHealthPercent;
  DT_OPTIONAL<DT_INT> unk_c8448e5;
  DT_OPTIONAL<DT_INT> unk_36173ba;
  DT_OPTIONAL<DT_INT> unk_268c683;
  DT_OPTIONAL<DT_INT> snoItem;
  DT_OPTIONAL<DT_INT> eTeam;
  DT_OPTIONAL<DT_INT> eConversationIcon;
  DT_OPTIONAL<DT_INT> unk_cbe0ae6;
  DT_OPTIONAL<DT_INT> unk_3890c34;
  DT_OPTIONAL<DT_INT> unk_ba8fd29;
  DT_ENUM<DT_INT> eTrickleInfoType;
  DT_UINT dwTrickleFlags;
  DT_OPTIONAL<DT_INT> dwHeadstoneCorpseReviveTime;
  DT_OPTIONAL<DT_INT> unk_2e963f;
  DT_OPTIONAL<DT_INT> hMinimapStringLabel;
  DT_OPTIONAL<DT_INT> snoStringList;
  DT_OPTIONAL<DT_INT> fMaxDisplayRangeSq;
  DT_OPTIONAL<DT_INT> nAction;
  DT_OPTIONAL<DT_INT> uEngagedWithRareTime;
  DT_OPTIONAL<DT_INT> bInCombat;
  DT_OPTIONAL<DT_INT> unk_c9c5de;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
