/**
 * Definition: t50b285a4
 * Hash: 50b285a4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t50b285a4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Power> snoPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
