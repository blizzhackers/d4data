/**
 * Definition: LogoutTickTimeMessage
 * Hash: fb2e5d79
 */

#include "LogoutTickTimeMessage.h"

void LogoutTickTimeMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eContext, base, current);
  current = ptr + 0x14;
  readData(&uMinWaitTicks, base, current);
  current = ptr + 0x18;
  readData(&uMaxWaitTicks, base, current);
  current = ptr + 0x1c;
  readData(&uKickTicks, base, current);
  ptr += 0x20;
}
