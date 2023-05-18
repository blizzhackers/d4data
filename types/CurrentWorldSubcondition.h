/**
 * Definition: CurrentWorldSubcondition
 * Hash: 403655c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CurrentWorldSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
