/**
 * Definition: t53b4558e
 * Hash: 53b4558e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t53b4558e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;
  DT_ENUM<DT_INT> eContactFrame;
  DT_INT bOptional;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
