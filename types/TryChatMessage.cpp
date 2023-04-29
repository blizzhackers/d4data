/**
 * Definition: TryChatMessage
 * Hash: c434fd44
 */

#include "TryChatMessage.h"

void TryChatMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&usMessage, base, ptr);
}
