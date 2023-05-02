/**
 * Definition: ConnectionEstablishedMessage
 * Hash: 493f75fd
 */

#include "ConnectionEstablishedMessage.h"

void ConnectionEstablishedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwGameAccountId, base, current);
  current = ptr + 0x14;
  readData(&dwAnimSyncedSeed, base, current);
  ptr += 0x18;
}
