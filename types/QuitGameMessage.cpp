/**
 * Definition: QuitGameMessage
 * Hash: e920aca2
 */

#include "QuitGameMessage.h"

void QuitGameMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eReason, base, ptr);
  readData(&dwLastHeartbeat, base, ptr);
}
