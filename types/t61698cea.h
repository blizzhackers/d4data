/**
 * Definition: t61698cea
 * Hash: 61698cea
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t61698cea : public ComplexRead {
  DT_CSTRING szOnEnd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
