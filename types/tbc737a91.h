/**
 * Definition: tbc737a91
 * Hash: bc737a91
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "tc80e1187.h"

#pragma push(pack, 1)

struct tbc737a91 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<tc80e1187, 16> arTransmogs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
