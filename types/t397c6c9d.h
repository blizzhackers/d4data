/**
 * Definition: t397c6c9d
 * Hash: 397c6c9d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t397c6c9d : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Actor> snoActor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
