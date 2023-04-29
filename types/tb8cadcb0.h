/**
 * Definition: tb8cadcb0
 * Hash: b8cadcb0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb8cadcb0 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
