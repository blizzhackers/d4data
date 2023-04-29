/**
 * Definition: PlayerQuestMessage
 * Hash: 65ea1c64
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerQuestMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
