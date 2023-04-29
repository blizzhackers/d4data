/**
 * Definition: t59c87ced
 * Hash: 59c87ced
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t59c87ced : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Conversation>, 7> snoConversations;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
