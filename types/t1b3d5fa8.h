/**
 * Definition: t1b3d5fa8
 * Hash: 1b3d5fa8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1b3d5fa8 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x2d> unk_283d1ad;
  DT_UINT szValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
