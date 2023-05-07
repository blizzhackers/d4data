/**
 * Definition: ChatMessage
 * Hash: d7c8b625
 */

#include "ChatMessage.h"

void ChatMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&usMessage, base, current);
  ptr += 0x414;
}
