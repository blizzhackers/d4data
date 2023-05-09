/**
 * Definition: t27c7c537
 * Hash: 27c7c537
 */

#pragma once

#include "../types.h"
#include "ConditionWrapper.h"

#pragma push(pack, 1)

struct t27c7c537 : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPassivePower;
  ConditionWrapper unk_edbef87;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
