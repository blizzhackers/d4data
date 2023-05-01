/**
 * Definition: t4c2dc82
 * Hash: 4c2dc82
 */

#pragma once

#include "../types.h"
#include "t5f527528.h"

#pragma push(pack, 1)

struct t4c2dc82 : public ComplexRead {
  t5f527528 localTransform;
  DT_VECTOR4D scale;
  DT_FLOAT unk_10099d9;
  DT_FLOAT unk_10099da;
  DT_FLOAT height;
  DT_FLOAT friction;
  DT_WORD boneIndex;
  DT_BYTE unk_4571c9b;
  DT_FIXEDARRAY<DT_WORD, 5> padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
