/**
 * Definition: t4a573bb2
 * Hash: 4a573bb2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4a573bb2 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_99e97f7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
