/**
 * Definition: t3ecfe93c
 * Hash: 3ecfe93c
 */

#pragma once

#include "../types.h"
#include "t95269030.h"

#pragma push(pack, 1)

struct t3ecfe93c : public ComplexRead {
  DT_VARIABLEARRAY<t95269030> arTiers;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
