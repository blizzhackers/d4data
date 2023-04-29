/**
 * Definition: Hardpoint
 * Hash: 80cdc229
 */

#pragma once

#include "../types.h"
#include "PRTransform.h"
#include "td8ee97d5.h"

#pragma push(pack, 1)

struct Hardpoint : public ComplexRead {
  td8ee97d5 tInfo;
  DT_INT nBoneIndex;
  DT_INT unk_692a5dc;
  PRTransform transform;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
