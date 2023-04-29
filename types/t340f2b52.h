/**
 * Definition: t340f2b52
 * Hash: 340f2b52
 */

#pragma once

#include "../types.h"
#include "t41e68f26.h"

#pragma push(pack, 1)

struct t340f2b52 : public ComplexRead {
  DT_VARIABLEARRAY<t41e68f26> arNodes;
  DT_VARIABLEARRAY<DT_INT> unk_36cc429;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
