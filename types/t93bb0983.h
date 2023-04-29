/**
 * Definition: t93bb0983
 * Hash: 93bb0983
 */

#pragma once

#include "../types.h"
#include "tc4f44d58.h"

#pragma push(pack, 1)

struct t93bb0983 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tc4f44d58> arParams;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
