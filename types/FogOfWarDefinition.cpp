/**
 * Definition: FogOfWarDefinition
 * Hash: 5c5f83a4
 */

#include "FogOfWarDefinition.h"

void FogOfWarDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&nDummy, base, current);
  current = ptr + 0x10;
  readData(&unk_f1e2551, base, current);
  ptr += 0x20;
}
