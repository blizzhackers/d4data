/**
 * Definition: NPCInteractOptionsMessage
 * Hash: 9aee398c
 */

#include "NPCInteractOptionsMessage.h"

void NPCInteractOptionsMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annTalkingTo, base, current);
  current = ptr + 0x18;
  readData(&tNPCInteraction, base, current);
  current = ptr + 0x2ec;
  readData(&ePreferredMenu, base, current);
  ptr += 0x2f0;
}
