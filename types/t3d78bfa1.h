/**
 * Definition: t3d78bfa1
 * Hash: 3d78bfa1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3d78bfa1 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_GBID<0x2d> unk_283d1ad;
  DT_INT nValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
