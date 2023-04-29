/**
 * Definition: NPCInteraction
 * Hash: 9e408ae1
 */

#include "NPCInteraction.h"

void NPCInteraction::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&eIcon, base, ptr);
  readData(&dwData, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&dwOwners, base, ptr);
  readData(&snoQuest, base, ptr);
}
