/**
 * Definition: RopeEffectMessageACDToPlace
 * Hash: 4368d578
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "SharedServerWorldPlace.h"

#pragma push(pack, 1)

struct RopeEffectMessageACDToPlace : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Rope> snoRope;
  DT_ACD_NETWORK_NAME annFrom;
  DT_ENUM<DT_INT> ePositionFrom;
  SharedServerWorldPlace tPlaceTo;
  DT_INT bIgnoreOwnerAlpha;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
