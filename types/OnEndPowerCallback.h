/**
 * Definition: OnEndPowerCallback
 * Hash: ab476e6e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct OnEndPowerCallback : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
