/**
 * Definition: tcdd23e8e
 * Hash: cdd23e8e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcdd23e8e : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::SubZone> snoSubzone;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
