/**
 * Definition: t2dd17720
 * Hash: 2dd17720
 */

#pragma once

#include "../types.h"
#include "td395da59.h"

#pragma push(pack, 1)

struct t2dd17720 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<td395da59> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
