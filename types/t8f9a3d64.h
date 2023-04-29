/**
 * Definition: t8f9a3d64
 * Hash: 8f9a3d64
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8f9a3d64 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_INT unk_907c1bb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
