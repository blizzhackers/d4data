/**
 * Definition: tc05b111b
 * Hash: c05b111b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc05b111b : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x2d> unk_283d1ad;
  DT_UINT szValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
