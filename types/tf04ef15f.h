/**
 * Definition: tf04ef15f
 * Hash: f04ef15f
 */

#pragma once

#include "../types.h"
#include "t3ecfe93c.h"

#pragma push(pack, 1)

struct tf04ef15f : public ComplexRead {
  DT_ENUM<DT_INT> unk_53c8916;
  DT_ENUM<DT_INT> eBehaviorType;
  DT_FLOAT unk_11ccff6;
  DT_RANGE<DT_INT> unk_95830e2;
  DT_INT unk_52d5e42;
  t3ecfe93c unk_595c677;
  DT_SNO<SnoGroup::Power> unk_ecc4ce7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
