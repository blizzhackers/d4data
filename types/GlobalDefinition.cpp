/**
 * Definition: GlobalDefinition
 * Hash: ec77129a
 */

#include "GlobalDefinition.h"

void GlobalDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwNextID, base, ptr);
  readData(&ptContent, base, ptr);
}
