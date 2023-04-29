/**
 * Definition: t30b72fa
 * Hash: 30b72fa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t30b72fa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
