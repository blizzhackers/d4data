/**
 * Definition: t19a85d0c
 * Hash: 19a85d0c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t19a85d0c : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eItemLabel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
