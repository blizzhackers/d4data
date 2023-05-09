/**
 * Definition: NPCComponentGroup
 * Hash: 924ae201
 */

#include "NPCComponentGroup.h"

void NPCComponentGroup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&sName, base, current);
  current = ptr + 0x4;
  readData(&arComponents, base, current);
  current = ptr + 0x14;
  readData(&tColorSet, base, current);
  ptr += 0x2c;
}
