/**
 * Definition: VisualInventoryMessage
 * Hash: 98cf1807
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "VisualEquipment.h"

#pragma push(pack, 1)

struct VisualInventoryMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  VisualEquipment tEquipment;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
