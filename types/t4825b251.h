/**
 * Definition: t4825b251
 * Hash: 4825b251
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4825b251 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::WorldState> snoWorldState;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
