/**
 * Definition: tfd7de095
 * Hash: fd7de095
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfd7de095 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_INT nPotionCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
