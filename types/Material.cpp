/**
 * Definition: Material
 * Hash: 50986f6f
 */

#include "Material.h"

void Material::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nSortPri, base, current);
  ptr += 0x4;
}
