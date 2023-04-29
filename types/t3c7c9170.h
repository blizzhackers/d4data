/**
 * Definition: t3c7c9170
 * Hash: 3c7c9170
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3c7c9170 : public ComplexRead {
  DT_SNO<SnoGroup::Conversation> snoConversation;
  DT_UINT unk_cf3ce;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
