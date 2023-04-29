/**
 * Definition: JoinLANGameMessage
 * Hash: c0a0ed6a
 */

#include "JoinLANGameMessage.h"

void JoinLANGameMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSGame, base, ptr);
  readData(&idGameAccount, base, ptr);
  readData(&szAccountName, base, ptr);
  readData(&eXLocale, base, ptr);
  readData(&flAspectRatio, base, ptr);
}
