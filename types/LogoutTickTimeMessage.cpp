/**
 * Definition: LogoutTickTimeMessage
 * Hash: fb2e5d79
 */

#include "LogoutTickTimeMessage.h"

void LogoutTickTimeMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eContext, base, ptr);
  readData(&uMinWaitTicks, base, ptr);
  readData(&uMaxWaitTicks, base, ptr);
  readData(&uKickTicks, base, ptr);
}
