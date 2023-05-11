/**
 * Definition: GeoChunk
 * Hash: ece011d4
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "GeoSet.h"
#include "t5ebc726.h"
#include "td95af7ec.h"

#pragma push(pack, 1)

struct GeoChunk : public ComplexRead {
  AABB aabbBounds;
  DT_VARIABLEARRAY<GeoSet> unk_d9fe6f6;
  DT_VARIABLEARRAY<td95af7ec> unk_4137988;
  DT_VARIABLEARRAY<t5ebc726> unk_457dee2;
  DT_VARIABLEARRAY<DT_FLOAT> unk_8c8b576;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
