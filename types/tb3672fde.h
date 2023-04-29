/**
 * Definition: tb3672fde
 * Hash: b3672fde
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb3672fde : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x37> unk_fb4d244;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
