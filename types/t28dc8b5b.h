/**
 * Definition: t28dc8b5b
 * Hash: 28dc8b5b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t28dc8b5b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
