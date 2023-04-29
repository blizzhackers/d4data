/**
 * Definition: t2c0b5f22
 * Hash: 2c0b5f22
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2c0b5f22 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
