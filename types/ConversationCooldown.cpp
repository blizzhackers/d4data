/**
 * Definition: ConversationCooldown
 * Hash: 42648320
 */

#include "ConversationCooldown.h"

void ConversationCooldown::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoConversation, base, current);
  current = ptr + 0x8;
  readData(&uExpirationTime, base, current);
  ptr += 0x10;
}
