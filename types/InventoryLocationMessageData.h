/**
 * Definition: InventoryLocationMessageData
 * Hash: 5bf0a966
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct InventoryLocationMessageData : public ComplexRead {
  DT_ACD_NETWORK_NAME annContainer;
  DT_ENUM<DT_INT> eSlot;
  DT_BCVEC2I pt;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
