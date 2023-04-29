/**
 * Definition: tcc5838a
 * Hash: cc5838a
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"

#pragma push(pack, 1)

struct tcc5838a : public ComplexRead {
  DT_UINT szName;
  PRTransform transform;
  DT_FLOAT unk_644027a;
  DT_RANGE<DT_INT> unk_83cc220;
  DT_FLOAT unk_81a5ef8;
  DT_RANGE<DT_INT> unk_2e8bbc0;
  DT_FLOAT unk_2cc466b;
  DT_INT unk_375223b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
