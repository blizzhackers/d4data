/**
 * Definition: te1ac09b4
 * Hash: e1ac09b4
 */

#pragma once

#include "../types.h"
#include "HardpointOffset.h"

#pragma push(pack, 1)

struct te1ac09b4 : public ComplexRead {
  HardpointOffset offset;
  DT_SNO<SnoGroup::ItemType> snoItemType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
