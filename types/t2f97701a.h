/**
 * Definition: t2f97701a
 * Hash: 2f97701a
 */

#pragma once

#include "../types.h"
#include "Currencies.h"

#pragma push(pack, 1)

struct t2f97701a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<Currencies> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
