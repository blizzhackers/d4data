/**
 * Definition: t252cba6b
 * Hash: 252cba6b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t252cba6b : public ComplexRead {
  DT_FLOAT flTime;
  DT_FLOAT flSpin;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
