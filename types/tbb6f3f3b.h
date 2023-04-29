/**
 * Definition: tbb6f3f3b
 * Hash: bb6f3f3b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbb6f3f3b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
