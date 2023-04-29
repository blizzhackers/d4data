/**
 * Definition: tc1d35c16
 * Hash: c1d35c16
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc1d35c16 : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
