/**
 * Definition: t74c296ab
 * Hash: 74c296ab
 */

#pragma once

#include "../types.h"
#include "tcf74eda4.h"

#pragma push(pack, 1)

struct t74c296ab : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tcf74eda4> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
