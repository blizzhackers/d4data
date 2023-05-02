/**
 * Definition: MaterialTextureEntry
 * Hash: 20eeb9b2
 */

#include "MaterialTextureEntry.h"

void MaterialTextureEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eShaderTex, base, current);
  current = ptr + 0x8;
  readData(&tMatTex, base, current);
  ptr += 0x30;
}
