/**
 * Definition: tc329b4be
 * Hash: c329b4be
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc329b4be : public ComplexRead {
  DT_SNO<SnoGroup::FogofWar> unk_445de3c;
  DT_SNO<SnoGroup::Texture> snoTexture;
  DT_VECTOR2D unk_df4022d;
  DT_VECTOR2D unk_f497881;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
