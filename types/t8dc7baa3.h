/**
 * Definition: t8dc7baa3
 * Hash: 8dc7baa3
 */

#pragma once

#include "../types.h"
#include "te64c779c.h"

#pragma push(pack, 1)

struct t8dc7baa3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<te64c779c> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
