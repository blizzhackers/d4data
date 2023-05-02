/**
 * Definition: StringListDefinition
 * Hash: dae1937c
 */

#include "StringListDefinition.h"

void StringListDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&arStrings, base, current);
  current = ptr + 0x18;
  readData(&ptMapStringTable, base, current);
  ptr += 0x20;
}
