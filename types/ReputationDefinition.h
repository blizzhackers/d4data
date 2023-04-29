/**
 * Definition: ReputationDefinition
 * Hash: 8b9a57f4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ReputationDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_UINT dwMaxValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
