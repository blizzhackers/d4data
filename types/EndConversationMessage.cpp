/**
 * Definition: EndConversationMessage
 * Hash: f3b6c737
 */

#include "EndConversationMessage.h"

void EndConversationMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoConversation, base, current);
  current = ptr + 0x14;
  readData(&unk_1dc956e, base, current);
  ptr += 0x18;
}
