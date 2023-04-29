/**
 * Definition: t9a0374e1
 * Hash: 9a0374e1
 */

#pragma once

#include "../types.h"
#include "t82280ff3.h"

#pragma push(pack, 1)

struct t9a0374e1 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_VARIABLEARRAY<t82280ff3> unk_880879b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
