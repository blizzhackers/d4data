/**
 * Definition: IKBone
 * Hash: afbbdb78
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct IKBone : public ComplexRead {
  DT_INT nBoneIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
