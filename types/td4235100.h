/**
 * Definition: td4235100
 * Hash: d4235100
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct td4235100 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  tb42131c6 unk_15efd3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
