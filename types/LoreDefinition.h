/**
 * Definition: LoreDefinition
 * Hash: 30431cfb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LoreDefinition : public ComplexRead {
  DT_INT nXPTier;
  DT_SNO<SnoGroup::Conversation> snoConversation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
