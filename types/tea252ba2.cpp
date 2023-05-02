/**
 * Definition: tea252ba2
 * Hash: ea252ba2
 */

#include "tea252ba2.h"

void tea252ba2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eShaderTex, base, current);
  current = ptr + 0x4;
  readData(&snoTexture, base, current);
  ptr += 0x8;
}
