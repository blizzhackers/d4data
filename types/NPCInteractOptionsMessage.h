/**
 * Definition: NPCInteractOptionsMessage
 * Hash: 9aee398c
 */

#pragma once

#include "../types.h"
#include "NPCInteraction.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct NPCInteractOptionsMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annTalkingTo;
  DT_FIXEDARRAY<NPCInteraction, 30> tNPCInteraction;
  DT_ENUM<DT_INT> ePreferredMenu;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
