/**
 * Definition: t6e65a695
 * Hash: 6e65a695
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t6e65a695 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_ENUM<DT_INT> unk_39baadf;
  tb42131c6 tVariant;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
