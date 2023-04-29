/**
 * Definition: t840bd0e3
 * Hash: 840bd0e3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t840bd0e3 : public ComplexRead {
  DT_UINT SoundPermDefinition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
