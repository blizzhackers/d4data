/**
 * Definition: NPCPreset
 * Hash: 3adfcfd4
 */

#pragma once

#include "../types.h"
#include "tb44ae007.h"

#pragma push(pack, 1)

struct NPCPreset : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_CSTRING szName;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_INT unk_d6d0056;
  DT_SNO<SnoGroup::Actor> snoActor;
  DT_CSTRING unk_a3ac836;
  DT_CSTRING unk_cd15187;
  DT_FIXEDARRAY<tb44ae007, 4> arrItems;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 2> unk_87a6362;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
