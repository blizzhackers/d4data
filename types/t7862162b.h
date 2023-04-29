/**
 * Definition: t7862162b
 * Hash: 7862162b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7862162b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
