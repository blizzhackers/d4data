/**
 * Definition: t611f180a
 * Hash: 611f180a
 */

#pragma once

#include "../types.h"
#include "tb0f2a959.h"

#pragma push(pack, 1)

struct t611f180a : public ComplexRead {
  tb0f2a959 tHeader;
  DT_SNO<SnoGroup::Power> snoPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
