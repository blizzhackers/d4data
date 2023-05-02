/**
 * Definition: NPCInteraction
 * Hash: 9e408ae1
 */

#include "NPCInteraction.h"

void NPCInteraction::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x4;
  readData(&eIcon, base, current);
  current = ptr + 0x8;
  readData(&dwData, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&dwOwners, base, current);
  current = ptr + 0x14;
  readData(&snoQuest, base, current);
  ptr += 0x18;
}
