/**
 * Definition: t4335f281
 * Hash: 4335f281
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t4335f281 : public ComplexRead {
  DT_SNO<SnoGroup::EffectGroup> snoEffectGroup;
  tb42131c6 unk_7eb10c0;
  tb42131c6 unk_9ffef5e;
  tb42131c6 unk_82f1fc7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
