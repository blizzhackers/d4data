/**
 * Definition: te5e3de90
 * Hash: e5e3de90
 */

#pragma once

#include "../types.h"
#include "BountyData.h"

#pragma push(pack, 1)

struct te5e3de90 : public ComplexRead {
  DT_ENUM<DT_INT> unk_756ebc1;
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_VARIABLEARRAY<BountyData> arBounties;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
