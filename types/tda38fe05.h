/**
 * Definition: tda38fe05
 * Hash: da38fe05
 */

#pragma once

#include "../types.h"
#include "t5f527528.h"

#pragma push(pack, 1)

struct tda38fe05 : public ComplexRead {
  t5f527528 localTransform;
  DT_FLOAT unk_9c026b5;
  DT_FLOAT friction;
  DT_WORD boneIndex;
  DT_FIXEDARRAY<DT_WORD, 3> padding;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
