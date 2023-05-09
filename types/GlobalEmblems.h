/**
 * Definition: GlobalEmblems
 * Hash: 9d10d0d6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GlobalEmblems : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Emblem>> unk_40d56a2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
