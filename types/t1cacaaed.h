/**
 * Definition: t1cacaaed
 * Hash: 1cacaaed
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1cacaaed : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_UINT unk_ebf9bb4;
  DT_FLOAT flValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
