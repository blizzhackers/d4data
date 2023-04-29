/**
 * Definition: t7e6f25c5
 * Hash: 7e6f25c5
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t7e6f25c5 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_SNO<SnoGroup::Power> snoDeathOverride;
  DT_UINT uCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
