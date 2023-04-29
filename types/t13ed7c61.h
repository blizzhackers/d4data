/**
 * Definition: t13ed7c61
 * Hash: 13ed7c61
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t13ed7c61 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Actor> snoGizmo;
  DT_VECTOR3D wpLocation;
  DT_UINT unk_1751d86;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
