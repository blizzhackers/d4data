/**
 * Definition: te11de1bb
 * Hash: e11de1bb
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct te11de1bb : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  tb42131c6 unk_d5e3388;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
