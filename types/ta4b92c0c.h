/**
 * Definition: ta4b92c0c
 * Hash: a4b92c0c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta4b92c0c : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x2d> unk_283d1ad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
