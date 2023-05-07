/**
 * Definition: tea88ceec
 * Hash: ea88ceec
 */

#pragma once

#include "../types.h"
#include "ValidComponents.h"

#pragma push(pack, 1)

struct tea88ceec : public ComplexRead {
  DT_UINT unk_461add4;
  DT_FIXEDARRAY<ValidComponents, 4> ptValidComponents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
