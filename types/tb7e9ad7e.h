/**
 * Definition: tb7e9ad7e
 * Hash: b7e9ad7e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb7e9ad7e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;
  DT_INT unk_259dc59;
  DT_INT unk_90599e6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
