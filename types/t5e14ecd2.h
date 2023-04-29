/**
 * Definition: t5e14ecd2
 * Hash: 5e14ecd2
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t5e14ecd2 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::ItemType> snoItemType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
