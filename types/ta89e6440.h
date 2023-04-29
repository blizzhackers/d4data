/**
 * Definition: ta89e6440
 * Hash: a89e6440
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"
#include "td305aa32.h"

#pragma push(pack, 1)

struct ta89e6440 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  td305aa32 unk_bf4138d;
  tb42131c6 tSlot;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
