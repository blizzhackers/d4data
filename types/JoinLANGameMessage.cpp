/**
 * Definition: JoinLANGameMessage
 * Hash: c0a0ed6a
 */

#include "JoinLANGameMessage.h"

void JoinLANGameMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSGame, base, current);
  current = ptr + 0x14;
  readData(&idGameAccount, base, current);
  current = ptr + 0x18;
  readData(&szAccountName, base, current);
  current = ptr + 0x98;
  readData(&eXLocale, base, current);
  current = ptr + 0x9c;
  readData(&flAspectRatio, base, current);
  ptr += 0xa0;
}
