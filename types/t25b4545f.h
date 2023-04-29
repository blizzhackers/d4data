/**
 * Definition: t25b4545f
 * Hash: 25b4545f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t25b4545f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;
  DT_UINT tPhaseName;
  DT_ENUM<DT_INT> eContactFrame;
  DT_INT bOptional;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
