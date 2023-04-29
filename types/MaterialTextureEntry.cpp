/**
 * Definition: MaterialTextureEntry
 * Hash: 20eeb9b2
 */

#include "MaterialTextureEntry.h"

void MaterialTextureEntry::read(const char* base, char* &ptr) {
  readData(&eShaderTex, base, ptr);
  readData(&tMatTex, base, ptr);
}
