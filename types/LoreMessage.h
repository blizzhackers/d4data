/**
 * Definition: LoreMessage
 * Hash: 88bd1537
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct LoreMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Lore> snoLore;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
