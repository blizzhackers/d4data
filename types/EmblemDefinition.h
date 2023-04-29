/**
 * Definition: EmblemDefinition
 * Hash: d7f1d13b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EmblemDefinition : public ComplexRead {
  DT_UINT hSmallIcon;
  DT_UINT hLargeIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
