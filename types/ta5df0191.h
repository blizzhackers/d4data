/**
 * Definition: ta5df0191
 * Hash: a5df0191
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta5df0191 : public ComplexRead {
  DT_ENUM<DT_INT> eAttribute;
  DT_FLOAT flBonus;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
