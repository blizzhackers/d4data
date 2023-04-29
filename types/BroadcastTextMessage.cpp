/**
 * Definition: BroadcastTextMessage
 * Hash: 9431c83d
 */

#include "BroadcastTextMessage.h"

void BroadcastTextMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szMsg, base, ptr);
}
