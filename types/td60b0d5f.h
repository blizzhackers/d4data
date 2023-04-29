/**
 * Definition: td60b0d5f
 * Hash: d60b0d5f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td60b0d5f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_d6337ba;
  DT_UINT dwPadding;
  DT_STRING_FORMULA tProcChance;
  DT_INT unk_b52872c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
