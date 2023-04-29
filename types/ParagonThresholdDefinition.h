/**
 * Definition: ParagonThresholdDefinition
 * Hash: 4114eb1e
 */

#pragma once

#include "../types.h"
#include "t456084a7.h"

#pragma push(pack, 1)

struct ParagonThresholdDefinition : public ComplexRead {
  DT_VARIABLEARRAY<t456084a7> unk_6653304;
  DT_FIXEDARRAY<DT_INT, 5> unk_eed6c20;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
