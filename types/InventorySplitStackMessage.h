/**
 * Definition: InventorySplitStackMessage
 * Hash: 64f7bad5
 */

#pragma once

#include "../types.h"
#include "InvLoc.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct InventorySplitStackMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_INT64 uAmount;
  InvLoc tLocation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
