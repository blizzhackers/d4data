/**
 * Definition: EnchantAffixChoice
 * Hash: 921eb15a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EnchantAffixChoice : public ComplexRead {
  DT_SNO<SnoGroup::Affix> snoAffix;
  DT_UINT dwSeed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
