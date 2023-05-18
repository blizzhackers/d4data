/**
 * Definition: ABTestDefinition
 * Hash: 23d9710c
 */

#include "ABTestDefinition.h"

void ABTestDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&arVariantKeys, base, current);
  ptr += 0x18;
}
