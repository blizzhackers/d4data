/**
 * Definition: t14155cf9
 * Hash: 14155cf9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t14155cf9 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x2d> unk_283d1ad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
