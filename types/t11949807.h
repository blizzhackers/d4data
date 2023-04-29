/**
 * Definition: t11949807
 * Hash: 11949807
 */

#pragma once

#include "../types.h"
#include "tfd376ef4.h"

#pragma push(pack, 1)

struct t11949807 : public ComplexRead {
  DT_VARIABLEARRAY<tfd376ef4> arSections;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
