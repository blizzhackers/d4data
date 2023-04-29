/**
 * Definition: td6c51928
 * Hash: d6c51928
 */

#pragma once

#include "../types.h"
#include "t840bd0e3.h"

#pragma push(pack, 1)

struct td6c51928 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t840bd0e3> unk_2fcab5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
