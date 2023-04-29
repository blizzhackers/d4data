/**
 * Definition: t78a562aa
 * Hash: 78a562aa
 */

#pragma once

#include "../types.h"
#include "t27c7c537.h"
#include "t58fbb94c.h"

#pragma push(pack, 1)

struct t78a562aa : public ComplexRead {
  DT_VARIABLEARRAY<t58fbb94c> arSlots;
  DT_VARIABLEARRAY<t27c7c537> arPowers;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
