/**
 * Definition: t5b4bfa41
 * Hash: 5b4bfa41
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5b4bfa41 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
