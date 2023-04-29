/**
 * Definition: t6c048b8b
 * Hash: 6c048b8b
 */

#pragma once

#include "../types.h"
#include "taae8e8ab.h"

#pragma push(pack, 1)

struct t6c048b8b : public ComplexRead {
  DT_SNO<SnoGroup::MarkerSet> snoLayer;
  DT_VARIABLEARRAY<taae8e8ab> ptChunks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
