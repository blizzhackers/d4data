/**
 * Definition: tece011d4
 * Hash: ece011d4
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "GeoSet.h"
#include "td95af7ec.h"

#pragma push(pack, 1)

struct tece011d4 : public ComplexRead {
  AABB aabbBounds;
  DT_VARIABLEARRAY<GeoSet> unk_d9fe6f6;
  DT_VARIABLEARRAY<td95af7ec> unk_4137988;
  DT_VARIABLEARRAY<DT_WORD> unk_7ef82a3;
  DT_VARIABLEARRAY<DT_FLOAT> unk_8c8b576;
  DT_INT ibid;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
