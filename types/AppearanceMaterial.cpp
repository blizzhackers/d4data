/**
 * Definition: AppearanceMaterial
 * Hash: f0dbe41f
 */

#include "AppearanceMaterial.h"

void AppearanceMaterial::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwMaterialHash, base, current);
  current = ptr + 0x4;
  readData(&unk_cf782ad, base, current);
  current = ptr + 0x8;
  readData(&unk_551fc93, base, current);
  current = ptr + 0x10;
  readData(&ptSOAs, base, current);
  ptr += 0x20;
}
