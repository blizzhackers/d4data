/**
 * Definition: t7334ae1e
 * Hash: 7334ae1e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7334ae1e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_d6337ba;
  DT_UINT dwPadding;
  DT_STRING_FORMULA tProcChance;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
