/**
 * Definition: t8c14a98b
 * Hash: 8c14a98b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8c14a98b : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DT_GBID<0x38>> arSkillTags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
