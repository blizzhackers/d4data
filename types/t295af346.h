/**
 * Definition: t295af346
 * Hash: 295af346
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t295af346 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_UINT dwTag;
  tb42131c6 unk_c063965;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
