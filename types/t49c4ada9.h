/**
 * Definition: t49c4ada9
 * Hash: 49c4ada9
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t49c4ada9 : public ComplexRead {
  DT_SNO<SnoGroup::Scene> snoScene;
  tb42131c6 unk_158239b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
