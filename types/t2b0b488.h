/**
 * Definition: t2b0b488
 * Hash: 2b0b488
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t2b0b488 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_VECTOR3D wpLocation;
  DT_UINT unk_336454f;
  DT_INT unk_164ef1e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
