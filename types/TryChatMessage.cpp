/**
 * Definition: TryChatMessage
 * Hash: c434fd44
 */

#include "TryChatMessage.h"

void TryChatMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&usMessage, base, current);
  ptr += 0x410;
}
