/**
 * Definition: t9d7affe
 * Hash: 9d7affe
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9d7affe : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT unk_b5ce76e;
  DT_INT unk_74544d1;
  DT_INT unk_9e5b233;
  DT_VARIABLEARRAY<DT_FLOAT> arThresholds;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
