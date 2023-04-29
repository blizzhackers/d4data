/**
 * Definition: NPCInteraction
 * Hash: 9e408ae1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct NPCInteraction : public ComplexRead {
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> eIcon;
  DT_UINT dwData;
  DT_UINT dwFlags;
  DT_UINT dwOwners;
  DT_SNO<SnoGroup::Quest> snoQuest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
