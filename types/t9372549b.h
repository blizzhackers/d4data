/**
 * Definition: t9372549b
 * Hash: 9372549b
 */

#pragma once

#include "../types.h"
#include "ParagonGlyphExperience.h"

#pragma push(pack, 1)

struct t9372549b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ParagonGlyphExperience> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
