/**
 * Definition: MaterialTextureEntry
 * Hash: 20eeb9b2
 */

#pragma once

#include "../types.h"
#include "MaterialTexture.h"

#pragma push(pack, 1)

struct MaterialTextureEntry : public ComplexRead {
  DT_ENUM<DT_INT> eShaderTex;
  MaterialTexture tMatTex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
