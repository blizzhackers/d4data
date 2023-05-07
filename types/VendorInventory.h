/**
 * Definition: VendorInventory
 * Hash: 3ee227bc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct VendorInventory : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::TreasureClass>> unk_4e6c129;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
