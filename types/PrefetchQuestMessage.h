/**
 * Definition: PrefetchQuestMessage
 * Hash: 7a5844c8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PrefetchQuestMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Quest> snoQuest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
