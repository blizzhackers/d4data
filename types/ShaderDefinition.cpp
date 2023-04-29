/**
 * Definition: ShaderDefinition
 * Hash: 370bc360
 */

#include "ShaderDefinition.h"

void ShaderDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwRenderLayers, base, ptr);
  readData(&ptPasses, base, ptr);
  readData(&unk_860effa, base, ptr);
  readData(&unk_cee0ffd, base, ptr);
  readData(&pShaderData, base, ptr);
}
