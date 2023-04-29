/**
 * Definition: t2a9bceb0
 * Hash: 2a9bceb0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2a9bceb0 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_756ebc1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
