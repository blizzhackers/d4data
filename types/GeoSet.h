/**
 * Definition: GeoSet
 * Hash: ad003c27
 */

#pragma once

#include "../types.h"
#include "SubObject.h"

#pragma push(pack, 1)

struct GeoSet : public ComplexRead {
  DT_VARIABLEARRAY<SubObject> ptSubObjects;
  DT_VARIABLEARRAY<DT_INT> unk_9d1d596;
  DT_INT unk_79283f;
  DT_INT unk_af1153d;
  DT_FLOAT unk_72aae9c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
