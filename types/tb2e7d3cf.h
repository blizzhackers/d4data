/**
 * Definition: tb2e7d3cf
 * Hash: b2e7d3cf
 */

#pragma once

#include "../types.h"
#include "t6b603dda.h"

#pragma push(pack, 1)

struct tb2e7d3cf : public ComplexRead {
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_e3331b5;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_a2b58a8;
  DT_FIXEDARRAY<t6b603dda, 5> tPrograms;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
