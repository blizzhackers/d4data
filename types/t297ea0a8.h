/**
 * Definition: t297ea0a8
 * Hash: 297ea0a8
 */

#pragma once

#include "../types.h"
#include "ta13668ea.h"

#pragma push(pack, 1)

struct t297ea0a8 : public ComplexRead {
  DT_UINT dwLookVariant;
  DT_VARIABLEARRAY<ta13668ea> unk_3135b10;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
