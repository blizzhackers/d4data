/**
 * Definition: BiomeDefinition
 * Hash: a331d15
 */

#include "BiomeDefinition.h"

void BiomeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&unk_742ea83, base, ptr);
  readData(&unk_3f35495, base, ptr);
  readData(&unk_470b82a, base, ptr);
  readData(&unk_d6b2f14, base, ptr);
}
