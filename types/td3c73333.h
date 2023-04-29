/**
 * Definition: td3c73333
 * Hash: d3c73333
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct td3c73333 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_UINT dwTag;
  tb42131c6 unk_c063965;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
