/**
 * Definition: t4dc6b815
 * Hash: 4dc6b815
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4dc6b815 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
