/**
 * Definition: ParagonThresholdDefinition
 * Hash: 4114eb1e
 */

#pragma once

#include "../types.h"
#include "ParagonThresholdEntry.h"

#pragma push(pack, 1)

struct ParagonThresholdDefinition : public ComplexRead {
  DT_VARIABLEARRAY<ParagonThresholdEntry> unk_6653304;
  DT_FIXEDARRAY<DT_INT, 5> unk_eed6c20;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
