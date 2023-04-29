/**
 * Definition: tb1f3d7f6
 * Hash: b1f3d7f6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb1f3d7f6 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> nItemLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
