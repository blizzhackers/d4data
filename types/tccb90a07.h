/**
 * Definition: tccb90a07
 * Hash: ccb90a07
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"
#include "tf5c4e3ed.h"

#pragma push(pack, 1)

struct tccb90a07 : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_SNO<SnoGroup::Actor> unk_26b74cf;
  tf5c4e3ed unk_fb8fc89;
  tb42131c6 tSlots;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
