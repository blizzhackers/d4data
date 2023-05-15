/**
 * Definition: GlobalQuestData
 * Hash: f4a7dadd
 */

#pragma once

#include "../types.h"
#include "CampaignData.h"
#include "ConnectorProperties.h"

#pragma push(pack, 1)

struct GlobalQuestData : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_INT64 unk_23c11ba;
  DT_INT64 unk_8bd826d;
  DT_INT64 unk_d9bddf0;
  DT_INT64 unk_70db485;
  DT_INT64 unk_daeff02;
  DT_INT64 unk_de43c60;
  DT_INT64 unk_8726862;
  DT_INT64 unk_4b26f7;
  DT_UINT unk_c6d58a9;
  DT_UINT unk_e318094;
  DT_UINT unk_a49964c;
  DT_SNO<SnoGroup::Quest> snoStartingQuest;
  CampaignData tCampaignData;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> unk_36bc0dc;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> unk_b419a05;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::FogofWar>> unk_a70acb6;
  DT_UINT unk_68fb226;
  ConnectorProperties unk_3286df3;
  ConnectorProperties unk_dd4bd56;
  DT_UINT unk_195043d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
