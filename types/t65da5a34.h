/**
 * Definition: t65da5a34
 * Hash: 65da5a34
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t65da5a34 : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Conversation>, 5> snoConversations;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
