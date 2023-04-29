/**
 * Definition: t96dcfbe7
 * Hash: 96dcfbe7
 */

#pragma once

#include "../types.h"
#include "ExperienceLevel.h"

#pragma push(pack, 1)

struct t96dcfbe7 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ExperienceLevel> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
