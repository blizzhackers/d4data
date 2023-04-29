/**
 * Definition: t4b7fb4ab
 * Hash: 4b7fb4ab
 */

#pragma once

#include "../types.h"
#include "t5e254c44.h"

#pragma push(pack, 1)

struct t4b7fb4ab : public ComplexRead {
  DT_INT bEnabled;
  DT_VARIABLEARRAY<t5e254c44> unk_440766;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
