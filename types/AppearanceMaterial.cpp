/**
 * Definition: AppearanceMaterial
 * Hash: f0dbe41f
 */

#include "AppearanceMaterial.h"

void AppearanceMaterial::read(const char* base, char* &ptr) {
  readData(&dwMaterialHash, base, ptr);
  readData(&unk_cf782ad, base, ptr);
  readData(&unk_551fc93, base, ptr);
  readData(&ptSOAs, base, ptr);
}
