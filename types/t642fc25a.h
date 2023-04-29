/**
 * Definition: t642fc25a
 * Hash: 642fc25a
 */

#pragma once

#include "../types.h"
#include "t2151baae.h"

#pragma push(pack, 1)

struct t642fc25a : public ComplexRead {
  DT_VARIABLEARRAY<t2151baae> arNodes;
  DT_VARIABLEARRAY<DT_INT> unk_36cc429;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
