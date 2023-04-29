/**
 * Definition: t5c4c3552
 * Hash: 5c4c3552
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5c4c3552 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_d6337ba;
  DT_UINT dwPadding;
  DT_STRING_FORMULA tProcChance;
  DT_INT unk_b52872c;
  DT_INT unk_ac0bfbc;
  DT_INT unk_99e97f7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
