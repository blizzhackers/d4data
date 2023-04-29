/**
 * Definition: t6e3bbfca
 * Hash: 6e3bbfca
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6e3bbfca : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_VECTOR3D vecPos;
  DT_UINT unk_c819eef;
  DT_SNO<SnoGroup::StringList> unk_3614bd3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
