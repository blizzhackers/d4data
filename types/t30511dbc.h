/**
 * Definition: t30511dbc
 * Hash: 30511dbc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t30511dbc : public ComplexRead {
  DT_UINT dwFormulaHash;
  DT_INT unk_4049b3e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
