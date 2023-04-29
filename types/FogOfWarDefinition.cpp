/**
 * Definition: FogOfWarDefinition
 * Hash: 5c5f83a4
 */

#include "FogOfWarDefinition.h"

void FogOfWarDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nDummy, base, ptr);
  readData(&unk_f1e2551, base, ptr);
}
