/**
 * Definition: t352f49ec
 * Hash: 352f49ec
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t352f49ec : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_UINT szVariableName;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
