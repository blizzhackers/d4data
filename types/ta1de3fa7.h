/**
 * Definition: ta1de3fa7
 * Hash: a1de3fa7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta1de3fa7 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
