/**
 * Definition: MakeupDefinition
 * Hash: 1b36952c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MakeupDefinition : public ComplexRead {
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_SNO<SnoGroup::Texture> unk_3657ed3;
  DT_FLOAT flIntensity;
  DT_FLOAT unk_e0611b0;
  DT_FLOAT unk_254bd5e;
  DT_UINT unk_fbabaf4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
