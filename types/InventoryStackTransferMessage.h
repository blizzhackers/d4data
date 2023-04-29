/**
 * Definition: InventoryStackTransferMessage
 * Hash: ed80e1ee
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct InventoryStackTransferMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItemSrc;
  DT_ACD_NETWORK_NAME annItemDest;
  DT_INT64 uAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
