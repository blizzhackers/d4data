/**
 * Definition: ABTestDefinition
 * Hash: 23d9710c
 */

#pragma once

#include "../types.h"
#include "StringWrapper.h"

#pragma push(pack, 1)

struct ABTestDefinition : public ComplexRead {
  DT_VARIABLEARRAY<StringWrapper> arVariantKeys;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
