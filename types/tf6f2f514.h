/**
 * Definition: tf6f2f514
 * Hash: f6f2f514
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf6f2f514 : public ComplexRead {
  DT_INT nRequiredRank;
  DT_SNO<SnoGroup::Power> snoPassivePower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
