/**
 * Definition: t5e9beb0e
 * Hash: 5e9beb0e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5e9beb0e : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
