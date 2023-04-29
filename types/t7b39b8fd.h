/**
 * Definition: t7b39b8fd
 * Hash: 7b39b8fd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7b39b8fd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
