/**
 * Definition: ted531777
 * Hash: ed531777
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ted531777 : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Conversation>, 1> snoConversations;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
