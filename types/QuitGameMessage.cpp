/**
 * Definition: QuitGameMessage
 * Hash: e920aca2
 */

#include "QuitGameMessage.h"

void QuitGameMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eReason, base, current);
  current = ptr + 0x14;
  readData(&dwLastHeartbeat, base, current);
  ptr += 0x1c;
}
