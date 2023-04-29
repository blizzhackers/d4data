/**
 * Definition: PopGroupHandle
 * Hash: fabd7fa8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PopGroupHandle : public ComplexRead {
  DT_SNO<SnoGroup::Population> snoPopulation;
  DT_GBID<0x14> gbidType;
  DT_INT nID;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
