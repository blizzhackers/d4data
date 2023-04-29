/**
 * Definition: InventoryRequestQuickMoveMessage
 * Hash: 855db250
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct InventoryRequestQuickMoveMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_ACD_NETWORK_NAME annOwner;
  DT_ENUM<DT_INT> eSlot;
  DT_INT nSlotMinY;
  DT_INT nSlotMaxY;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
