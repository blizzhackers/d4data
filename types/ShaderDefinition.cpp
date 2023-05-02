/**
 * Definition: ShaderDefinition
 * Hash: 370bc360
 */

#include "ShaderDefinition.h"

void ShaderDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwRenderLayers, base, current);
  current = ptr + 0x10;
  readData(&ptPasses, base, current);
  current = ptr + 0x20;
  readData(&unk_860effa, base, current);
  current = ptr + 0x24;
  readData(&unk_cee0ffd, base, current);
  current = ptr + 0x128;
  readData(&pShaderData, base, current);
  ptr += 0x138;
}
