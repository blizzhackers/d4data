/**
 * Definition: tda21c503
 * Hash: da21c503
 */

#pragma once

#include "../types.h"
#include "t6ce32aa3.h"

#pragma push(pack, 1)

struct tda21c503 : public ComplexRead {
  DT_VARIABLEARRAY<t6ce32aa3> unk_a3b27b4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
