/**
 * Definition: ta142f7f6
 * Hash: a142f7f6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta142f7f6 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
