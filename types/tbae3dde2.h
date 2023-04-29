/**
 * Definition: tbae3dde2
 * Hash: bae3dde2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbae3dde2 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT nPriority;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
