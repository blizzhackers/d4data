/**
 * Definition: t553a13a2
 * Hash: 553a13a2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t553a13a2 : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  DT_UINT unk_770f3b7;
  DT_ENUM<DT_INT> unk_c3535ed;
  DT_VARIABLEARRAY<DT_VECTOR3D> unk_2195b98;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
