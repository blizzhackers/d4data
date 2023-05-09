/**
 * Definition: BountyZones
 * Hash: e5e3de90
 */

#pragma once

#include "../types.h"
#include "BountyData.h"

#pragma push(pack, 1)

struct BountyZones : public ComplexRead {
  DT_ENUM<DT_INT> eZone;
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_VARIABLEARRAY<BountyData> arBounties;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
