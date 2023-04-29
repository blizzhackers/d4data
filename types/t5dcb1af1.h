/**
 * Definition: t5dcb1af1
 * Hash: 5dcb1af1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5dcb1af1 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_33d39d0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
