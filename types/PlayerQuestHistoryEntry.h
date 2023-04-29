/**
 * Definition: PlayerQuestHistoryEntry
 * Hash: e52e4443
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PlayerQuestHistoryEntry : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_INT nStepUID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
