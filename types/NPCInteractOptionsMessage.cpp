/**
 * Definition: NPCInteractOptionsMessage
 * Hash: 9aee398c
 */

#include "NPCInteractOptionsMessage.h"

void NPCInteractOptionsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annTalkingTo, base, ptr);
  readData(&tNPCInteraction, base, ptr);
  readData(&ePreferredMenu, base, ptr);
}
