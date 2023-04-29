/**
 * Definition: tb593e3c8
 * Hash: b593e3c8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb593e3c8 : public ComplexRead {
  DT_SNO<SnoGroup::AmbientSound> snoAmbient;
  DT_ENUM<DT_INT> unk_787cb71;
  DT_FLOAT flSpacing;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Surface>> arSurfaces;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
