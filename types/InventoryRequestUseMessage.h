/**
 * Definition: InventoryRequestUseMessage
 * Hash: 48d47349
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct InventoryRequestUseMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItemToUse;
  DT_SNO<SnoGroup::Item> snoItem;
  DT_ENUM<DT_INT> eType;
  DT_ACD_NETWORK_NAME annTarget;
  SharedServerWorldPlace tPlace;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
