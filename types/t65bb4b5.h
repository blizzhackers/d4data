/**
 * Definition: t65bb4b5
 * Hash: 65bb4b5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t65bb4b5 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_INT bIsPlayer;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
