/**
 * Definition: ABTestDefinition
 * Hash: 23d9710c
 */

#include "ABTestDefinition.h"

void ABTestDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_eb92604, base, ptr);
}
