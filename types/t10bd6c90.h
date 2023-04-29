/**
 * Definition: t10bd6c90
 * Hash: 10bd6c90
 */

#pragma once

#include "../types.h"
#include "td0677c85.h"

#pragma push(pack, 1)

struct t10bd6c90 : public ComplexRead {
  DT_VARIABLEARRAY<td0677c85> unk_b3ad390;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
