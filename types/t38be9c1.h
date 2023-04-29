/**
 * Definition: t38be9c1
 * Hash: 38be9c1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t38be9c1 : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flTime;
  DT_UINT dwPad;
  DT_FLOAT tValue;
  DT_ENUM<DT_INT> unk_6ca113c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
