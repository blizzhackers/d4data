/**
 * Definition: ACDInventoryPositionMessage
 * Hash: c77dcd30
 */

#pragma once

#include "../types.h"
#include "InventoryLocationMessageData.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDInventoryPositionMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  InventoryLocationMessageData tInvLocationData;
  DT_ENUM<DT_INT> tLocType;
  DT_OPTIONAL<DT_INT> unk_9e938b5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
