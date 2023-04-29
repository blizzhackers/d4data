/**
 * Definition: t58b25647
 * Hash: 58b25647
 */

#pragma once

#include "../types.h"
#include "t41e42840.h"

#pragma push(pack, 1)

struct t58b25647 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t41e42840> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
