/**
 * Definition: tea252ba2
 * Hash: ea252ba2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tea252ba2 : public ComplexRead {
  DT_ENUM<DT_INT> eShaderTex;
  DT_SNO<SnoGroup::Texture> snoTexture;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
