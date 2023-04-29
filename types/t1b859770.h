/**
 * Definition: t1b859770
 * Hash: 1b859770
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1b859770 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
