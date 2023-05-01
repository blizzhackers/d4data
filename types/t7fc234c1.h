/**
 * Definition: t7fc234c1
 * Hash: 7fc234c1
 */

#pragma once

#include "../types.h"
#include "t5f527528.h"

#pragma push(pack, 1)

struct t7fc234c1 : public ComplexRead {
  t5f527528 localTransform;
  DT_VECTOR4D scale;
  DT_FLOAT unk_10099d9;
  DT_FLOAT unk_10099da;
  DT_FLOAT height;
  DT_FLOAT unk_9c026b5;
  DT_WORD boneIndex;
  DT_FIXEDARRAY<DT_WORD, 7> padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
