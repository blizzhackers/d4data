/**
 * Definition: t803e808c
 * Hash: 803e808c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t803e808c : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Quest>, 16> unk_9104406;
  DT_FIXEDARRAY<DT_VECTOR3D, 16> unk_6ef22d;
  DT_FIXEDARRAY<DT_INT, 16> unk_b8ec161;
  DT_SNO<SnoGroup::World> snoWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
