/**
 * Definition: ANNDataMessage
 * Hash: 819f049c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ANNDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
