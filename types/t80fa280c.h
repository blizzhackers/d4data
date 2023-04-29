/**
 * Definition: t80fa280c
 * Hash: 80fa280c
 */

#pragma once

#include "../types.h"
#include "t6b03fc60.h"

#pragma push(pack, 1)

struct t80fa280c : public ComplexRead {
  DT_VARIABLEARRAY<t6b03fc60> arNodes;
  DT_VARIABLEARRAY<DT_INT> unk_36cc429;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
