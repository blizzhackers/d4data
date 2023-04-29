/**
 * Definition: tab2d8e94
 * Hash: ab2d8e94
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tab2d8e94 : public ComplexRead {
  DT_SNO<SnoGroup::Reputation> snoReputation;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
