/**
 * Definition: t9d10d0d6
 * Hash: 9d10d0d6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9d10d0d6 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Emblem>> unk_40d56a2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
