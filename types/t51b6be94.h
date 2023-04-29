/**
 * Definition: t51b6be94
 * Hash: 51b6be94
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t51b6be94 : public ComplexRead {
  DT_VARIABLEARRAY<DT_INT> pBoneIDs;
  DT_INT nVertCount;
  DT_INT unk_4e6be76;
  DT_INT nIndexCount;
  DT_INT nIndexOffset;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
