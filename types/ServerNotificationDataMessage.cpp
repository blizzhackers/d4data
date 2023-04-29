/**
 * Definition: ServerNotificationDataMessage
 * Hash: 33421fbd
 */

#include "ServerNotificationDataMessage.h"

void ServerNotificationDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uSec, base, ptr);
  readData(&eType, base, ptr);
}
