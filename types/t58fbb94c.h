/**
 * Definition: t58fbb94c
 * Hash: 58fbb94c
 */

#pragma once

#include "../types.h"
#include "ConditionWrapper.h"

#pragma push(pack, 1)

struct t58fbb94c : public ComplexRead {
  ConditionWrapper unk_edbef87;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
