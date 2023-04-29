/**
 * Definition: tdcc8652e
 * Hash: dcc8652e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdcc8652e : public ComplexRead {
  DT_ENUM<DT_INT> eAttribute;
  DT_INT nParam;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
