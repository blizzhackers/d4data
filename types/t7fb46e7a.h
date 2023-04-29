/**
 * Definition: t7fb46e7a
 * Hash: 7fb46e7a
 */

#pragma once

#include "../types.h"
#include "t3b2abece.h"

#pragma push(pack, 1)

struct t7fb46e7a : public ComplexRead {
  DT_VARIABLEARRAY<t3b2abece> arNodes;
  DT_VARIABLEARRAY<DT_INT> unk_36cc429;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
