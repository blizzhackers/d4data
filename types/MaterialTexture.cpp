/**
 * Definition: MaterialTexture
 * Hash: e7e2eca0
 */

#include "MaterialTexture.h"

void MaterialTexture::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoTex, base, current);
  current = ptr + 0x8;
  readData(&ptTexAnim, base, current);
  current = ptr + 0x20;
  readData(&unk_908e73d, base, current);
  ptr += 0x28;
}
