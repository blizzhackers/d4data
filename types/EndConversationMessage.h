/**
 * Definition: EndConversationMessage
 * Hash: f3b6c737
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EndConversationMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Conversation> snoConversation;
  DT_UINT unk_1dc956e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
