/**
 * Definition: ItemPowerSubcondition
 * Hash: 717e78cd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ItemPowerSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_INT nIPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
