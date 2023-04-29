/**
 * Definition: tc36a4d08
 * Hash: c36a4d08
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc36a4d08 : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flTime;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
