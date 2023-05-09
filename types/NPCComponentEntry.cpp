/**
 * Definition: NPCComponentEntry
 * Hash: 92249466
 */

#include "NPCComponentEntry.h"

void NPCComponentEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bAny, base, current);
  current = ptr + 0x8;
  readData(&ptValidComponents, base, current);
  ptr += 0x18;
}
