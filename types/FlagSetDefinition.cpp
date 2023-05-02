/**
 * Definition: FlagSetDefinition
 * Hash: 41c7650f
 */

#include "FlagSetDefinition.h"

void FlagSetDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&arFlagLookups, base, current);
  ptr += 0x18;
}
