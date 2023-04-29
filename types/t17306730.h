/**
 * Definition: t17306730
 * Hash: 17306730
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t17306730 : public ComplexRead {
  DT_CSTRING szName;
  DT_CSTRING szToolTip;
  DT_SNO<SnoGroup::AiBehavior> snoAIBehavior;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_cbd4b2c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
