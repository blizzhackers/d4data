/**
 * Definition: InventoryRequestMoveMessage
 * Hash: b2ae3f13
 */

#pragma once

#include "../types.h"
#include "InvLoc.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct InventoryRequestMoveMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  InvLoc tLocation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
