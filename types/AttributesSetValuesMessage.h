/**
 * Definition: AttributesSetValuesMessage
 * Hash: 11efee8
 */

#pragma once

#include "../types.h"
#include "NetAttributeKeyValue.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct AttributesSetValuesMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_FIXEDARRAY<NetAttributeKeyValue, 15> atKeyVals;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
