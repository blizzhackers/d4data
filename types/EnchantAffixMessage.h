/**
 * Definition: EnchantAffixMessage
 * Hash: d1099834
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EnchantAffixMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_SNO<SnoGroup::Affix> snoAffixToReroll;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
