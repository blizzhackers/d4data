/**
 * Definition: t7de5a3b2
 * Hash: 7de5a3b2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7de5a3b2 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_FLOAT flMinValue;
  DT_FLOAT flMaxValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
