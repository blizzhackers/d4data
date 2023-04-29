/**
 * Definition: ACDCollFlagsMessage
 * Hash: fabcdfa4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDCollFlagsMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_UINT uDynamicFlagsNoOverlap;
  DT_UINT uDynamicMyFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
