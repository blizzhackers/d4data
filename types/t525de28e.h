/**
 * Definition: t525de28e
 * Hash: 525de28e
 */

#pragma once

#include "../types.h"
#include "ConditionWrapper.h"

#pragma push(pack, 1)

struct t525de28e : public ComplexRead {
  DT_UINT unk_1c4f058;
  ConditionWrapper unk_edbef87;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
