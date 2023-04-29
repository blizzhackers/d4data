/**
 * Definition: InventoryRequestSocketMessage
 * Hash: 5cd799e5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct InventoryRequestSocketMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_2d5ac18;
  DT_ACD_NETWORK_NAME unk_fa7e312;
  DT_OPTIONAL<DT_INT> unk_490e4ef;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
