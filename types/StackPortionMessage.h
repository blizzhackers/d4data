/**
 * Definition: StackPortionMessage
 * Hash: c749a606
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct StackPortionMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_INT64 uAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
