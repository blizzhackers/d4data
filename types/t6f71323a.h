/**
 * Definition: t6f71323a
 * Hash: 6f71323a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6f71323a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> unk_799ca4d;
  DT_SNO<SnoGroup::Power> snoOverridePower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
