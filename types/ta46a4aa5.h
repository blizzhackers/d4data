/**
 * Definition: ta46a4aa5
 * Hash: a46a4aa5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta46a4aa5 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_UINT unk_8021830;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
