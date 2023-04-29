/**
 * Definition: WorldStateDefinition
 * Hash: 3bb55992
 */

#include "WorldStateDefinition.h"

void WorldStateDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
}
