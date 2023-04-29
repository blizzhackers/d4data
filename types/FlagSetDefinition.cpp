/**
 * Definition: FlagSetDefinition
 * Hash: 41c7650f
 */

#include "FlagSetDefinition.h"

void FlagSetDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&arFlagLookups, base, ptr);
}
