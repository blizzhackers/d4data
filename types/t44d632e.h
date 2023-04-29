/**
 * Definition: t44d632e
 * Hash: 44d632e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t44d632e : public ComplexRead {
  DT_FLOAT flX;
  DT_FLOAT flY;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
