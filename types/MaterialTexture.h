/**
 * Definition: MaterialTexture
 * Hash: e7e2eca0
 */

#pragma once

#include "../types.h"
#include "TexAnim.h"

#pragma push(pack, 1)

struct MaterialTexture : public ComplexRead {
  DT_SNO<SnoGroup::Texture> snoTex;
  DT_POLYMORPHIC_VARIABLEARRAY ptTexAnim;
  DT_INT unk_908e73d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
