/**
 * Definition: t1d15fe71
 * Hash: 1d15fe71
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1d15fe71 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
