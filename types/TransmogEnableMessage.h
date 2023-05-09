/**
 * Definition: TransmogEnableMessage
 * Hash: 965d4e57
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct TransmogEnableMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eSlot;
  DT_INT bEnable;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
