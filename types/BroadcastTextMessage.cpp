/**
 * Definition: BroadcastTextMessage
 * Hash: 9431c83d
 */

#include "BroadcastTextMessage.h"

void BroadcastTextMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szMsg, base, current);
  ptr += 0x410;
}
