/**
 * Definition: ACDPickupFailedMessage
 * Hash: ebd5b69e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDPickupFailedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT unk_c9b5ba6;
  DT_ENUM<DT_INT> ePickupResponse;
  DT_ACD_NETWORK_NAME annPickee;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
