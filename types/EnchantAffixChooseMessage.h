/**
 * Definition: EnchantAffixChooseMessage
 * Hash: 52f7e855
 */

#pragma once

#include "../types.h"
#include "EnchantAffixChoice.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EnchantAffixChooseMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_FIXEDARRAY<EnchantAffixChoice, 5> tEnchantAffixChoices;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
