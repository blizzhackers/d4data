/**
 * Definition: ServerNotificationDataMessage
 * Hash: 33421fbd
 */

#include "ServerNotificationDataMessage.h"

void ServerNotificationDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uSec, base, current);
  current = ptr + 0x14;
  readData(&eType, base, current);
  ptr += 0x18;
}
