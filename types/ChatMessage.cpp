/**
 * Definition: ChatMessage
 * Hash: d7c8b625
 */

#include "ChatMessage.h"

void ChatMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&usMessage, base, ptr);
}
