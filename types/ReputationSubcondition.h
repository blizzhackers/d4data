/**
 * Definition: ReputationSubcondition
 * Hash: 8c5e391c
 */

#pragma once

#include "../types.h"
#include "ReputationValuePair.h"

#pragma push(pack, 1)

struct ReputationSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  ReputationValuePair tPair;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
