/**
 * Definition: ACDChangeGBHandleMessage
 * Hash: 8846de08
 */

#pragma once

#include "../types.h"
#include "GBHandle.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDChangeGBHandleMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  GBHandle hGB;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
