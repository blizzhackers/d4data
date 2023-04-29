/**
 * Definition: t80554fed
 * Hash: 80554fed
 */

#pragma once

#include "../types.h"
#include "t38be9c1.h"

#pragma push(pack, 1)

struct t80554fed : public ComplexRead {
  DT_VARIABLEARRAY<t38be9c1> arNodes;
  DT_VARIABLEARRAY<DT_INT> unk_36cc429;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
