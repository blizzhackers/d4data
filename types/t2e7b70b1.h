/**
 * Definition: t2e7b70b1
 * Hash: 2e7b70b1
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t2e7b70b1 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  tb42131c6 tAnimSet;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
