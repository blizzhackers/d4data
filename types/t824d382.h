/**
 * Definition: t824d382
 * Hash: 824d382
 */

#pragma once

#include "../types.h"
#include "SkillTag.h"

#pragma push(pack, 1)

struct t824d382 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<SkillTag> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
