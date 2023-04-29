/**
 * Definition: ConnectionEstablishedMessage
 * Hash: 493f75fd
 */

#include "ConnectionEstablishedMessage.h"

void ConnectionEstablishedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwGameAccountId, base, ptr);
  readData(&dwAnimSyncedSeed, base, ptr);
}
