/**
 * Definition: QuestChainStep
 * Hash: b2395df1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct QuestChainStep : public ComplexRead {
  DT_UINT dwID;
  DT_SNO<SnoGroup::Quest> snoQuest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
