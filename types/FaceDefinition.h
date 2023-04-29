/**
 * Definition: FaceDefinition
 * Hash: 974cc578
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct FaceDefinition : public ComplexRead {
  DT_FIXEDARRAY<DT_INT, 5> unk_9da2273;
  DT_UINT unk_305622d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
