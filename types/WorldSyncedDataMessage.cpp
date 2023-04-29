/**
 * Definition: WorldSyncedDataMessage
 * Hash: e477fdad
 */

#include "WorldSyncedDataMessage.h"

void WorldSyncedDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&tSyncedData, base, ptr);
}
