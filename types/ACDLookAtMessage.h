/**
 * Definition: ACDLookAtMessage
 * Hash: 9c456657
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDLookAtMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annSrc;
  DT_ACD_NETWORK_NAME annTarget;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
