/**
 * Definition: ConversationCooldown
 * Hash: 42648320
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConversationCooldown : public ComplexRead {
  DT_SNO<SnoGroup::Conversation> snoConversation;
  DT_INT64 uExpirationTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
