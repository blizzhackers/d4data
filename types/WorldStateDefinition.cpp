/**
 * Definition: WorldStateDefinition
 * Hash: 3bb55992
 */

#include "WorldStateDefinition.h"

void WorldStateDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  ptr += 0xc;
}
