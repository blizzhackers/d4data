/**
 * Definition: LoreDefinition
 * Hash: 30431cfb
 */

#include "LoreDefinition.h"

void LoreDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nXPTier, base, ptr);
  readData(&snoConversation, base, ptr);
}
