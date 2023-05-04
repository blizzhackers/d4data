/**
 * Definition: t26d3dba1
 * Hash: 26d3dba1
 */

#pragma once

#include "../types.h"
#include "ConditionData.h"

#pragma push(pack, 1)

struct t26d3dba1 : public ComplexRead {
  DT_VARIABLEARRAY<ConditionData> arConditionData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
