/**
 * Definition: t18a5c5e4
 * Hash: 18a5c5e4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t18a5c5e4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_f86aafe;
  DT_ENUM<DT_INT> eBehavior;
  DT_INT unk_d014f8b;
  DT_INT unk_81c0263;
  DT_INT nFadeGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
