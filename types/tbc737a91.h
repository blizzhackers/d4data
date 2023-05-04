/**
 * Definition: tbc737a91
 * Hash: bc737a91
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "TransmogSlotData.h"

#pragma push(pack, 1)

struct tbc737a91 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<TransmogSlotData, 16> arTransmogs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
