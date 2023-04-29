/**
 * Definition: HeroDefinition
 * Hash: 5f2aebf7
 */

#include "HeroDefinition.h"

void HeroDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&pProtoData, base, ptr);
}
