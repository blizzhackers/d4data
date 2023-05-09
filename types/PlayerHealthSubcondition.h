/**
 * Definition: PlayerHealthSubcondition
 * Hash: 8e552474
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PlayerHealthSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_FLOAT unk_6ea5eed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
