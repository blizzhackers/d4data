/**
 * Definition: t820685a7
 * Hash: 820685a7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t820685a7 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_INT unk_33f86dd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
