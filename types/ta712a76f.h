/**
 * Definition: ta712a76f
 * Hash: a712a76f
 */

#pragma once

#include "../types.h"
#include "tdd48bb68.h"

#pragma push(pack, 1)

struct ta712a76f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<tdd48bb68> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
