/**
 * Definition: t92249466
 * Hash: 92249466
 */

#pragma once

#include "../types.h"
#include "ta96996c3.h"

#pragma push(pack, 1)

struct t92249466 : public ComplexRead {
  DT_INT bAny;
  DT_VARIABLEARRAY<ta96996c3> unk_e0479fa;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
