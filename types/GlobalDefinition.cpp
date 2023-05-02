/**
 * Definition: GlobalDefinition
 * Hash: ec77129a
 */

#include "GlobalDefinition.h"

void GlobalDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwNextID, base, current);
  current = ptr + 0x10;
  readData(&ptContent, base, current);
  ptr += 0x28;
}
