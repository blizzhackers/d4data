/**
 * Definition: StringListDefinition
 * Hash: dae1937c
 */

#include "StringListDefinition.h"

void StringListDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&arStrings, base, ptr);
  readData(&ptMapStringTable, base, ptr);
}
