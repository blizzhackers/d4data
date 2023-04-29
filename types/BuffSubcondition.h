/**
 * Definition: BuffSubcondition
 * Hash: e041c994
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct BuffSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoBuffPower;
  DT_UINT unk_6c4bff7;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
