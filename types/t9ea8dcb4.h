/**
 * Definition: t9ea8dcb4
 * Hash: 9ea8dcb4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9ea8dcb4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_7f4b6d5;
  DT_INT unk_a639294;
  DT_UINT unk_b31efb6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
