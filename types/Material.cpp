/**
 * Definition: Material
 * Hash: 50986f6f
 */

#include "Material.h"

void Material::read(const char* base, char* &ptr) {
  readData(&nSortPri, base, ptr);
}
