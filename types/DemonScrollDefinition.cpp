/**
 * Definition: DemonScrollDefinition
 * Hash: 4a9871eb
 */

#include "DemonScrollDefinition.h"

void DemonScrollDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&arRewards, base, current);
  ptr += 0x224;
}
