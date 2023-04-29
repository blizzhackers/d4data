/**
 * Definition: t14c5741
 * Hash: 14c5741
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t14c5741 : public ComplexRead {
  DT_CSTRING szName;
  DT_CSTRING szToolTip;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::AnimSet>> unk_479d177;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
