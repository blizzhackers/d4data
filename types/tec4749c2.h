/**
 * Definition: tec4749c2
 * Hash: ec4749c2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tec4749c2 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_GBID<0x1f> unk_b23f628;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
