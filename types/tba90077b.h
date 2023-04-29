/**
 * Definition: tba90077b
 * Hash: ba90077b
 */

#pragma once

#include "../types.h"
#include "InventoryLocationMessageData.h"
#include "tad008e7e.h"

#pragma push(pack, 1)

struct tba90077b : public ComplexRead {
  tad008e7e tHeader;
  InventoryLocationMessageData tInvLocationData;
  DT_ACD_NETWORK_NAME annItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
