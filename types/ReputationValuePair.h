/**
 * Definition: ReputationValuePair
 * Hash: ab2d8e94
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ReputationValuePair : public ComplexRead {
  DT_SNO<SnoGroup::Reputation> snoReputation;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
