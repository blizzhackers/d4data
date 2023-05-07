/**
 * Definition: MountPreset
 * Hash: 42e90c26
 */

#pragma once

#include "../types.h"
#include "t8c33d728.h"

#pragma push(pack, 1)

struct MountPreset : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_CSTRING szName;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_INT unk_d6d0056;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_FIXEDARRAY<t8c33d728, 1> arrItems;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 1> unk_aff169e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
