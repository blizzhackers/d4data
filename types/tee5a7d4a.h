/**
 * Definition: tee5a7d4a
 * Hash: ee5a7d4a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tee5a7d4a : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_UINT unk_ebf9bb4;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
