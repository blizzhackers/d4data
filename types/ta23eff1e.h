/**
 * Definition: ta23eff1e
 * Hash: a23eff1e
 */

#pragma once

#include "../types.h"
#include "te6f4bbd7.h"

#pragma push(pack, 1)

struct ta23eff1e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<te6f4bbd7> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
