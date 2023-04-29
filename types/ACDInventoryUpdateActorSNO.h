/**
 * Definition: ACDInventoryUpdateActorSNO
 * Hash: 14e05422
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDInventoryUpdateActorSNO : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::Actor> snoActor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
