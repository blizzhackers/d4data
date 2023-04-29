/**
 * Definition: tc36fb4b8
 * Hash: c36fb4b8
 */

#pragma once

#include "../types.h"
#include "t150d0776.h"

#pragma push(pack, 1)

struct tc36fb4b8 : public ComplexRead {
  DT_VARIABLEARRAY<t150d0776> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
