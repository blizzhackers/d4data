/**
 * Definition: EndConversationMessage
 * Hash: f3b6c737
 */

#include "EndConversationMessage.h"

void EndConversationMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoConversation, base, ptr);
  readData(&unk_1dc956e, base, ptr);
}
