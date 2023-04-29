/**
 * Definition: te1ac09b4
 * Hash: e1ac09b4
 */

#pragma once

#include "../types.h"
#include "tdc622f50.h"

#pragma push(pack, 1)

struct te1ac09b4 : public ComplexRead {
  tdc622f50 offset;
  DT_SNO<SnoGroup::ItemType> snoItemType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
