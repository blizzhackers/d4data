/**
 * Definition: t7b31c691
 * Hash: 7b31c691
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7b31c691 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_INT unk_b23ce1f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
