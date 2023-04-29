/**
 * Definition: AttributeSetValueMessage
 * Hash: 6ee82d42
 */

#pragma once

#include "../types.h"
#include "NetAttributeKeyValue.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct AttributeSetValueMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  NetAttributeKeyValue tKeyVal;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
