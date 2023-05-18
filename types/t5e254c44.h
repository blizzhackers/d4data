/**
 * Definition: t5e254c44
 * Hash: 5e254c44
 */

#pragma once

#include "../types.h"
#include "IKBone.h"

#pragma push(pack, 1)

struct t5e254c44 : public ComplexRead {
  IKBone tBone;
  DT_VECTOR3D unk_e46daa0;
  DT_FLOAT unk_947540c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
