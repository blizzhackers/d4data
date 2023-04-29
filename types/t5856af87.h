/**
 * Definition: t5856af87
 * Hash: 5856af87
 */

#pragma once

#include "../types.h"
#include "t888e9180.h"

#pragma push(pack, 1)

struct t5856af87 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t888e9180> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
