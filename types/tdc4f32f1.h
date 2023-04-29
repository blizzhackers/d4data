/**
 * Definition: tdc4f32f1
 * Hash: dc4f32f1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tdc4f32f1 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_3eecb71;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_VECTOR3D wpLocation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
