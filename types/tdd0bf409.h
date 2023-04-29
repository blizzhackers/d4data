/**
 * Definition: tdd0bf409
 * Hash: dd0bf409
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdd0bf409 : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Surface>> arSurfaces;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
