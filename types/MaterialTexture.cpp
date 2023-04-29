/**
 * Definition: MaterialTexture
 * Hash: e7e2eca0
 */

#include "MaterialTexture.h"

void MaterialTexture::read(const char* base, char* &ptr) {
  readData(&snoTex, base, ptr);
  readData(&ptTexAnim, base, ptr);
  readData(&unk_908e73d, base, ptr);
}
