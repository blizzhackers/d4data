/**
 * Definition: ShaderDefinition
 * Hash: 370bc360
 */

#pragma once

#include "../types.h"
#include "RenderPass.h"

#pragma push(pack, 1)

struct ShaderDefinition : public ComplexRead {
  DT_UINT dwRenderLayers;
  DT_VARIABLEARRAY<RenderPass> ptPasses;
  DT_INT unk_860effa;
  DT_CHARARRAY<256> unk_cee0ffd;
  DT_VARIABLEARRAY<DT_BYTE> pShaderData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
