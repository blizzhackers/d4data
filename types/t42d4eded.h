/**
 * Definition: t42d4eded
 * Hash: 42d4eded
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t42d4eded : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT szPowerMod;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
