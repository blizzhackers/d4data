/**
 * Definition: HeroDefinition
 * Hash: 5f2aebf7
 */

#include "HeroDefinition.h"

void HeroDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&pProtoData, base, current);
  ptr += 0x18;
}
