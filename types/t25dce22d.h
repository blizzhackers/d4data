/**
 * Definition: t25dce22d
 * Hash: 25dce22d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t25dce22d : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_INT nTier;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
