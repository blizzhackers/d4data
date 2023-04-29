/**
 * Definition: t30f4b788
 * Hash: 30f4b788
 */

#pragma once

#include "../types.h"
#include "ExperienceLevelAlt.h"

#pragma push(pack, 1)

struct t30f4b788 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ExperienceLevelAlt> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
