/**
 * Definition: t868a55ec
 * Hash: 868a55ec
 */

#pragma once

#include "../types.h"
#include "td2f29025.h"

#pragma push(pack, 1)

struct t868a55ec : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<td2f29025> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
