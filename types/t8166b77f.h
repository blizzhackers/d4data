/**
 * Definition: t8166b77f
 * Hash: 8166b77f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8166b77f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_STRING_FORMULA tInterval;
  DT_STRING_FORMULA unk_b7bb063;
  DT_INT unk_dac1f5d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
