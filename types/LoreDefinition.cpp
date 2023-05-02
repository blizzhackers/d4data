/**
 * Definition: LoreDefinition
 * Hash: 30431cfb
 */

#include "LoreDefinition.h"

void LoreDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&nXPTier, base, current);
  current = ptr + 0xc;
  readData(&snoConversation, base, current);
  ptr += 0x10;
}
