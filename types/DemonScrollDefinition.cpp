/**
 * Definition: DemonScrollDefinition
 * Hash: 4a9871eb
 */

#include "DemonScrollDefinition.h"

void DemonScrollDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&arRewards, base, ptr);
}
