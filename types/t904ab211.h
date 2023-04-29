/**
 * Definition: t904ab211
 * Hash: 904ab211
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t904ab211 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_UINT unk_ebf9bb4;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
