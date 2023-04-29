/**
 * Definition: RareItemNameMessage
 * Hash: b7608b9f
 */

#pragma once

#include "../types.h"
#include "RareItemName.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct RareItemNameMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  RareItemName tRareItemName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
