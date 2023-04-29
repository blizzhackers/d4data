/**
 * Definition: ted5b6d19
 * Hash: ed5b6d19
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ted5b6d19 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_49ab17c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
