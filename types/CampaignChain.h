/**
 * Definition: CampaignChain
 * Hash: e792ade3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CampaignChain : public ComplexRead {
  DT_UINT dwID;
  DT_SNO<SnoGroup::QuestChain> snoQuestChain;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
